/*
  A function to compute the greatest common denominator of two integers.

  Implementation uses the Euclidean Algorithm.  Non-recursive version.

  Jim Teresco

  CSIS-301, Siena College, Fall 2024
*/

/* gcd function: takes two integer parameters, uses Euclidean
   Algorithm to compute and return greatest common denominator.

   Requirement: a and b are nonnegative.
*/
int gcd(int a, int b) {
    while (a != 0) {
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}