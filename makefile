# build an executable named count from main,cc
all: main.cc
	g++ -g -Wall -o count main.cc

clean: 
	$(RM) count

