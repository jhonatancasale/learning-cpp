/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Fri 28 Apr 16:48:25 -03 2017
 *
 */

#include <iostream>
#include <complex>

namespace ns {
  template <class T>
  inline void swap(T& d, T& s) {
    T tmp = d;
    d = s;
    s = tmp;
  }
}

int main (int argc, char **argv) { 
  int a = 42, b = 23;
  double i = 42.0, j = 23.001;
  std::complex<double> r(2.4, 3.5), s(3.4, 6.7);

  std::cout << "Before: (" << a << ", " << b << ")" << std::endl;
  ns::swap(a, b);
  std::cout << "After:  (" << a << ", " << b << ")" << std::endl;

  std::cout << "Before: (" << i << ", " << j << ")" << std::endl;
  ns::swap(i, j);
  std::cout << "After:  (" << i << ", " << j << ")" << std::endl;

  std::cout << "Before: (" << r << ", " << s << ")" << std::endl;
  ns::swap(r, s);
  std::cout << "After:  (" << r << ", " << s << ")" << std::endl;

  return (EXIT_SUCCESS);
}

