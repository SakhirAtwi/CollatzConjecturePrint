

compile: CollatzConjectureTest.cpp
	g++ -std=c++11 CollatzConjectureTest.cpp -o CollatzConjectureTest

run:
	./CollatzConjectureTest

read:
	subl ./*.txt
