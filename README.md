# timestamper

A tiny tool to add a timestamp before every line of standard output.

Here is an example of timestamping a compilation:
![Timestamping the make command](https://github.com/julvo/timestamper/blob/master/demo/timestamper_make.gif)

## Usage
Simply pipe the output of any program into timestamper `your-program |
timestamper`. When piping the timestamper output into a text file, you can
deactivate the grey formatting using the `--no-colors` flag.

## Installation
If you have g++ installed, simply run `make` to build. If you also want to move
the binary to `/usr/local/bin` you can use `make install`.

For example:
```
git clone https://github.com/julvo/timestamper
cd timestamper
make install
```

Afterwards `timestamper` should be available in your path.

