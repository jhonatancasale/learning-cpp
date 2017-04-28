/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Fri 28 Apr 17:56:51 -03 2017
 *
 */

/* Convert this program to C++
 * change array to vector<>
 */

#include <iostream>
#include <vector>

const int N = 40;

template <class summable>
inline void sum(summable& s, int size, const std::vector<summable>& data) {
  s = 0;
  for(int i = 0; i < size; i++)
    s += data[i];
}


int main (int argc, char **argv)
{
  int accum = 0;
  std::vector<int> data(10);

  for(int i = 0; i < N; ++i) 
    data[i] = i;

  sum(accum, N, data);

  std::cout << "sum is " << accum << std::endl;
  return (EXIT_SUCCESS);
}
