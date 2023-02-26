#!/bin/bash

CC=g++
FLAGS= -Wall -g
LIBS=
SRC=$(wildcard *.cpp)
OBJS=$(subst .cpp,.o,$(SRC))
OUTPUT=program
RM=rm -f

all: $(OBJS)
				$(CC) $(OBJS) -o $(OUTPUT) $(LIBS)

%.o: %.cpp
				$(CC) $(FLAGS) -c $<

run:
				./program

clean:
				@$(RM) $(OBJS) *.gch

purge: clean
				@$(RM) $(OUTPUT)