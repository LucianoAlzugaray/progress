########################################
##			Progress Makefile         ##
########################################


.PHONY: install help clean test

BUILD_PATH = build/

all:
	#despues me fijo

clean:
	rm $(BIN_FOLDER)*

help: 
	#Display the help

install:
	#Install the module to use at library

test:
	#Run tests