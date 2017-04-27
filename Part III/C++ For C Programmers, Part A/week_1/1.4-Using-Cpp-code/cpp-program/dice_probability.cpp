/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Thu 27 Apr 13:46:09 -03 2017
 *
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int sides = 6; // replaces many sharp defines
inline int r_sides(){ return (rand() % sides + 1); }

int main (int argc, char **argv)
{
  const int n_dices = 2;
  int d1, d2;
  srand(clock());
  //std::cout << "\nEnter number of trials: ";
  //:: -> scope resolution operator
  std::cout << "\nEnter number of trials: ";

  int trials;
  std::cin >> trials; // compare to scanf
  int *outcomes = new int[n_dices * sides + 1];

  for (int j = 0; j < trials; ++j)
    outcomes[(d1 = r_sides()) + (d2 = r_sides())]++;
  std::cout << "Probability\n";
  for (int j = 2; j < n_dices * sides + 1; ++j)
    std::cout << "j = " << j << " p = "
              << static_cast<double>(outcomes[j])/trials
              << std::endl;

  delete(outcomes);
  return (EXIT_SUCCESS);
}
