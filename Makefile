########################################
##			Progress Makefile         ##
########################################

.PHONY: install help clean test

BUILD_PATH = build
SRC_PATH = src

INCS = -I/usr/include/postgresql/ -I/usr/lib/swi-prolog/include/ 
FLAGS = -fpic -lpq -g -Wall

all: $(BUILD_PATH)/$(BIN)

$(BUILD_PATH)/conn.so: $(BUILD_PATH)/conn.o
	gcc -shared -o conn.so conn.o $(FLAGS)

$(BUILD_PATH)/conn.o: $(SRC_PATH)/conn.c
	gcc -c conn.c 

clean:
	rm -rf $(BIN_FOLDER)*

help: 
	#Display the help

install:
	#Install the module to use at library

test:
	#Run tests