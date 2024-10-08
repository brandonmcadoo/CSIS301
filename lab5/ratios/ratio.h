/*
  CS 322/324 Example Code, Mount Holyoke College
  CS 220/CS 335, Siena College
  CSC 433, The College of Saint Rose
  CSIS-301, Siena College
  Jim Teresco

  Header file for ratio structure and related functions
*/

#ifndef _H_RATIO_
#define _H_RATIO_

typedef struct ratio {
  int numerator;
  int denominator;
} ratio;

extern ratio *create_ratio(int numerator, int denominator);
extern ratio *add_ratios(ratio *rat1, ratio *rat2);
extern void reduce_ratio(ratio *rat);
extern void print_ratio(ratio *rat);
extern void set_ratio_numerator(ratio *r, int num);
extern void set_ratio_denominator(ratio *r, int den);
extern int get_ratio_numerator(ratio *r);
extern int get_ratio_denominator(ratio *r);
extern void set_ratio_mixed(ratio *r, int whole, int num, int den);
extern void print_ratio_mixed(ratio *r);

#endif