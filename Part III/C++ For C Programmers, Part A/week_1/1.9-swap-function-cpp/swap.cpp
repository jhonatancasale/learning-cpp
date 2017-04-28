/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Fri 28 Apr 16:19:05 -03 2017
 *
 */

#include <iostream>

inline void swap(int& i, int& j);
inline void swap(double& i, double& j);

int main (int argc, char **argv)
{
  int a = 42, b = 23;
  double i = 42.0, j = 23.001;

  std::cout << "Before: (" << a << ", " << b << ")" << std::endl;
  swap(a, b);
  std::cout << "After:  (" << a << ", " << b << ")" << std::endl;

  std::cout << "Before: (" << i << ", " << j << ")" << std::endl;
  swap(i, j);
  std::cout << "After:  (" << i << ", " << j << ")" << std::endl;

  return (EXIT_SUCCESS);
}

inline void swap(int& i, int& j) {
  int tmp = i;
  i = j;
  j = tmp;
}

inline void swap(double& i, double& j) {
  double tmp = i;
  i = j;
  j = tmp;
}
