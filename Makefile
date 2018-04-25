timestamper: main.cpp
	g++ -o timestamper main.cpp

install: timestamper
	mv ./timestamper /usr/local/bin/timestamper
