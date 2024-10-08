void isortptr(int *a, int asize) {
  int *p = a;
  int *q;
  int tmp;

  for (++p;  p < a+asize; p++) {
    q = p;
    tmp = *p;
    while ((q > a) && (*(q-1) > tmp)) {
      *q = *(q-1);
      q--;
    }
    *q = tmp;
  }
}