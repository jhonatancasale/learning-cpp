/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Thu 11 May 10:57:42 -03 2017
 *
 */

#include <iostream>


template <class T1, class T2>
void copy(const T1 source[], T2 destination[], const int size) {
  for(int i = 0; i < size; ++i)
    destination[i] = static_cast<T2>(source[i]);
}

int main (int argc, char **argv)
{
  const int sample_size = 16;

  int *data_int = new int[sample_size];
  double *data_double = new double[sample_size];

  for(int i = 0; i < sample_size; ++i) data_int[i] = i * 2;

  copy(data_int, data_double, sample_size);
  copy(data_double, data_int, sample_size);

  delete(data_int);
  delete(data_double);

  return (EXIT_SUCCESS);
}
