/*
  CS 322/324 Example Code, Mount Holyoke College
  CS 220/CS 335, Siena College
  CSC 433, The College of Saint Rose
  CSIS-301, Siena College
  Jim Teresco

  ratio-related functions
*/

#include <stdlib.h>
#include <stdio.h>
#include "ratio.h"
#include "gcd.h"

/* create a new ratio structure with the given numerator and denominator */
ratio *create_ratio(int numerator, int denominator) {
  ratio *r = (ratio *)malloc(sizeof(ratio));

  r->numerator = numerator;
  r->denominator = denominator;

  return r;
}

/* add two ratios, return result in lowest terms */
ratio *add_ratios(ratio *rat1, ratio *rat2) {
  ratio *r = (ratio *)malloc(sizeof(ratio));

  r->numerator = ((rat1->numerator * rat2->denominator) +
		  (rat2->numerator * rat1->denominator));
  r->denominator = rat1->denominator * rat2->denominator;

  reduce_ratio(r);

  return r;
}

void set_ratio_numerator(ratio *r, int num){
  r->numerator = num;
}

void set_ratio_denominator(ratio *r, int den){
  r->denominator = den;
}

int get_ratio_numerator(ratio *r){
  return r->numerator;
}

int get_ratio_denominator(ratio *r){
  return r->denominator;
}

void set_ratio_mixed(ratio *r, int whole, int num, int den){
  set_ratio_numerator(r, (whole * den) + num);
  set_ratio_denominator(r, den);
}

/* reduce ratio to lowest terms */
void reduce_ratio(ratio *r) {

  int div = gcd(r->numerator, r->denominator);
  r->numerator /= div;
  r->denominator /= div;
}

/* print out a ratio */
void print_ratio(ratio *r) {

  printf("%d/%d\n", r->numerator, r->denominator);
}

void print_ratio_mixed(ratio *r){
  if(r->numerator < r->denominator){
    printf("%d/%d", r->numerator, r->denominator);
  } else {
    int whole = r->numerator / r->denominator;
    int rem = r->numerator % r->denominator;
    if(rem == 0){
      printf("%d\n",whole);
    } else {
      printf("%d %d/%d\n",whole, rem, r->denominator);
    }
  }
}