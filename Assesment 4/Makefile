# Makefile for int queue programs
#
# Jim Teresco, CSIS 330, Siena College
#
# $Id$
#
CFILES=sll.c queuetest.c
OFILES=$(CFILES:.c=.o)
CC=clang -g -Wall

queuetest:	$(OFILES)
	$(CC) -o queuetest $(OFILES)

clean::
	/bin/rm -f queuetest $(OFILES)