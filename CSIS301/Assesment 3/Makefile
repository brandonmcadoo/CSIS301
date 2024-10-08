CFILES=sum_ratios.c ratio.c gcd.c
OFILES=$(CFILES:.c=.o)
CC=clang

strend: $(OFILES)
	$(CC) -o sum_ratios $(OFILES)

clean::
	/bin/rm -f sum_ratios $(OFILES)