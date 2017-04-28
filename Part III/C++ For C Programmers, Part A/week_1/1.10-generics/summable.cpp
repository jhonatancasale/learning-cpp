/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Fri 28 Apr 17:34:33 -03 2017
 *
 */

#include <iostream>

template <class summable>
summable sum(const summable data[], int size, summable s=0) {
  for(int i = 0; i < size; i++)
    s += data[i];
  // += must work for summable
  return s;
}

int main (int argc, char **argv) {
  int *integers = new int[10];

  for(int i = 0; i < 10; i++) 
    integers[i] = i;

  double *doublers= new double[10];

  for(int i = 0; i < 10; i++) 
    doublers[i] = i * 2.0;

  std::cout << "Sum: " << sum(integers, 10) << std::endl;
  std::cout << "Sum: " << sum(doublers, 10) << std::endl;

  delete(integers);
  delete(doublers);

  return (EXIT_SUCCESS);
}
