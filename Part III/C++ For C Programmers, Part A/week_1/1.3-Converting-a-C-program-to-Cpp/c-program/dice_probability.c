/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Thu 27 Apr 13:10:16 -03 2017
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <strings.h>

#define SIDES 6
#define R_SIDE (rand() % SIDES + 1)

int main (int argc, char **argv)
{
  int trials = 0, n_dices = 2, j, d1 = 0, d2 = 0;
  unsigned int outcomes[n_dices * SIDES + 1];
  bzero(outcomes, (n_dices * SIDES + 1) * sizeof(unsigned int));

  srand(clock());
  printf("\nEnter number of trials: ");
  scanf("%d", &trials);
  for(j = 0; j < trials; j++) {
    outcomes[(d1 = R_SIDE) + (d2 = R_SIDE)]++;
  }
  printf("\nprobability\n");
  for(j = 2; j < n_dices * SIDES + 1; ++j)
    printf("j = %2d p = %lf\n", j, (double)(outcomes[j])/trials);

  return (EXIT_SUCCESS);
}
