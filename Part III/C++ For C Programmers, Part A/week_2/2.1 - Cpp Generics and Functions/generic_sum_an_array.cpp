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

template <class summable>
summable sum(const summable data[], const int size, summable s = 0) {
  for(int i = 0; i < size; ++i)
    s += data[i]; // += must work for summable
  return s;
}

int main (int argc, char **argv)
{
  const auto sample_size = 10;
  const auto shift = 5;

  int *data = new int[sample_size];
  double *data_2 = new double[sample_size];

  for (int i = 0; i < sample_size; ++i) data[i] = i;
  for (int i = 0; i < sample_size; ++i) data_2[i] = static_cast<double>(i);

  // int domain
  std::cout << "Sum from: " << data[0] << " to: " << data[sample_size - 1]
            << " = " << sum(data, sample_size) << std::endl;

  std::cout << "Sum from: " << data[shift] << " to: " << data[sample_size - 1]
            << " = " << sum(data + shift , sample_size - shift, 10) << std::endl;

  // double domain
  std::cout << "Sum from: " << data_2[0] << " to: " << data_2[sample_size - 1]
            << " = " << sum(data_2, sample_size) << std::endl;

  std::cout << "Sum from: " << data_2[shift] << " to: " << data_2[sample_size - 1]
            << " = " << sum(data_2 + shift , sample_size - shift, 10.0) << std::endl;

  delete(data);
  delete(data_2);

  return (0);
}
