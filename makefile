#
# Assignment 5: Operator Overloading
# makefile
# Created: 03/28/2017
# Author: Christopher A Runyan
#
CC=g++
CFLAGS=-g -Wall

all: ShapeTest.o Shape.o Rectangle.o Circle.o
	${CC} ${CFLAGS} -o ShapeTest ShapeTest.o Shape.o Rectangle.o Circle.o

ShapeTest.o: ShapeTest.cpp
	${CC} ${CFLAGS} -c ShapeTest.cpp

Shape.o: Shape.cpp
	${CC} ${CFLAGS} -c Shape.cpp

Rectangle.o: Rectangle.cpp
	${CC} ${CFLAGS} -c Rectangle.cpp

Circle.o: Circle.cpp
	${CC} ${CFLAGS} -c Circle.cpp

clean:
	rm *.o
	rm main
