# Makefile for int queue programs
#
# Jim Teresco, CSIS 330, Siena College
#
# $Id$
#
CFILES=sll.c slltest.c
OFILES=$(CFILES:.c=.o)
CC=clang -g -Wall

slltest:	$(OFILES)
	$(CC) -o slltest $(OFILES)

clean::
	/bin/rm -f slltest $(OFILES)