/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main ()
{
  int nb;

  int tab[5];
  for(int i = 0;i<5;i++){
    tab[i]=10+i;
  }
  /* generate secret number between 1 and 10: */
  nb = rand() % 10 + 1;
  printf("Le nombre alea est :%d\n",nb);
  //on essayde de pick un nombre
  int pickedCard;
  pickedCard = tab[nb];
  printf("La carte prise est : %d",pickedCard);

  /*tab[2]=nb;
    for(int i = 0;i<5;i++){
    printf("%d",tab[i]);
    printf("\n");
  }*/
}
/* Comment faire un do while
  do {
    printf ("Guess the number (1 to 10): ");
    scanf ("%d",&iGuess);
    if (iSecret<iGuess) puts ("The secret number is lower");
    else if (iSecret>iGuess) puts ("The secret number is higher");
  } while (iSecret!=iGuess);

  puts ("Congratulations!");
  return 0;
}
*/

