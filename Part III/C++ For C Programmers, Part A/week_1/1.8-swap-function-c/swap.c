/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Fri 28 Apr 16:01:27 -03 2017
 *
 */

#include <stdlib.h>
#include <stdio.h>

void swap(int *, int *);
void swap_double(double *, double *);

int main (int argc, char **argv) {
  int a = 42, b = 23;
  double i = 42.0, j = 23.001;

  printf("Before: (%i, %i)\n", a, b);
  swap(&a, &b);
  printf("After:  (%i, %i)\n", a, b);

  printf("Before: (%lf, %lf)\n", i, j);
  swap_double(&i, &j);
  printf("After:  (%lf, %lf)\n", i, j);

  return (EXIT_SUCCESS);
}

void swap(int *i, int *j) {
  int tmp = *i;
  *i = *j;
  *j = tmp;
}

void swap_double(double *i, double *j) {
  double tmp = *i;
  *i = *j;
  *j = tmp;
}
