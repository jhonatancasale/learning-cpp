/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Thu 11 May 07:29:03 -03 2017
 *
 */

#include <iostream>

template <class printable>
void print(const printable data[], const int size) {
  std::cout << "[";

  if (size > 0) {
    for(int i = 0; i < size - 1; ++i)
      std::cout << data[i] << ", ";
    std::cout << data[size - 1];
  }

  std::cout << "]" << std::endl;
}

int main (int argc, char **argv)
{
  const auto sample_size = 10;

  int *data_int = new int[sample_size];
  double *data_double = new double[sample_size];

  for (int i = 0; i < sample_size; ++i) data_int[i] = i;
  for (int i = 0; i < sample_size; ++i) data_double[i] = static_cast<double>(i) / 2;

  // int domain
  print(data_int, sample_size);

  // double domain
  print(data_double, sample_size);

  delete(data_int);
  delete(data_double);

  return (0);
}
