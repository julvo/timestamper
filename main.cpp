#include<iostream>
#include<string>
#include<cstring>
#include<ctime>

using namespace std;

// format time in grey as [HH:MM:SS DD/MM/YY]
const char*     TIME_FMT        = "[%T %D]  ";
const int       LEN_TIME_FMT    = 31;
const char*     GREY_START      = "\033[90m";
const char*     GREY_STOP       = "\033[0m";

void parse_args(int argc, char** argv, bool* use_colors) {
    if (argc > 1 && !strcmp(argv[1], "--no-colors")) {
        *use_colors = false;
    } else {
        *use_colors = true;
    }
}

int main(int argc, char** argv) {
    string line;
    char time_str[LEN_TIME_FMT];
    time_t t;
    bool use_colors;

    parse_args(argc, argv, &use_colors);

    getline(cin, line);
    while (cin.good()) {
        time(&t);
        strftime(time_str, LEN_TIME_FMT, TIME_FMT, localtime(&t));

        if (use_colors) cout << GREY_START;
        cout << time_str;
        if (use_colors) cout << GREY_STOP;
        cout << line << endl;

        getline(cin, line);
    }

    // Write the time in a finishing line just before exiting 
    time(&t);
    strftime(time_str, LEN_TIME_FMT, TIME_FMT, localtime(&t));

    if (use_colors) cout << GREY_START;
    cout << time_str << "Finished";
    if (use_colors) cout << GREY_STOP;
    cout << endl;
}
