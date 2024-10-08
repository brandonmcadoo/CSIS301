CFILES=gcd.c ratio.c more_ratios.c
OFILES=$(CFILES:.c=.o)
CC=clang

strend: $(OFILES)
	$(CC) -o more_ratios $(OFILES)

clean::
	/bin/rm -f more_ratios $(OFILES)