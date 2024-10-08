CFILES=strend.c
OFILES=$(CFILES:.c=.o)
CC=clang

strend: $(OFILES)
	$(CC) -o strend $(OFILES)

clean::
	/bin/rm -f strend $(OFILES)