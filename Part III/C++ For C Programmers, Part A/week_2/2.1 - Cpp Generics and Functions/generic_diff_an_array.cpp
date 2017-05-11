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

template <class differ>
differ diff(const differ data[], const int size, differ s = 0) {
  for(int i = 0; i < size; ++i)
    s -= data[i]; // -= must work for differ
  return s;
}

int main (int argc, char **argv)
{
  const auto sample_size = 10;
  const auto shift = 5;

  int *data_int = new int[sample_size];
  double *data_double = new double[sample_size];

  for (int i = 0; i < sample_size; ++i) data_int[i] = i;
  for (int i = 0; i < sample_size; ++i) data_double[i] = static_cast<double>(i);

  // int domain
  std::cout << "Sum from: " << data_int[0] << " to: " << data_int[sample_size - 1]
            << " = " << diff(data_int, sample_size) << std::endl;

  std::cout << "Sum from: " << data_int[shift] << " to: " << data_int[sample_size - 1]
            << " = " << diff(data_int + shift , sample_size - shift, 10) << std::endl;

  // double domain
  std::cout << "Sum from: " << data_double[0] << " to: " << data_double[sample_size - 1]
            << " = " << diff(data_double, sample_size) << std::endl;

  std::cout << "Sum from: " << data_double[shift] << " to: " << data_double[sample_size - 1]
            << " = " << diff(data_double + shift , sample_size - shift, 10.0) << std::endl;

  delete(data_int);
  delete(data_double);

  return (0);
}
