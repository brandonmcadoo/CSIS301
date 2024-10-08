CFILES=inputsortadder.c isort.c
OFILES=$(CFILES:.c=.o)
CC=clang

inputsortadder: $(OFILES)
	$(CC) -o inputsortadder $(OFILES)

clean::
	/bin/rm -f inputsortadder $(OFILES)