timestamper: main.cpp
	g++ -std=c++11 -o timestamper main.cpp

install: timestamper
	mv ./timestamper /usr/local/bin/timestamper
