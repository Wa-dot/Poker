#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <cstdlib>
#include <iostream>
#include <algorithm>


int main ()
{
    int cartesDejaPrise[52];
    int mano[5];
    int dejaPris[51];
    int nbAlea;

    for(int i = 0;i<5;i++){//on initilise toutes les valuers du tableau
        mano[i]=i;
    }
   /* while mano[4]=0{
        nbAlea = rand() % 10;
        if nbAlea ==
    }*/
    nbAlea = rand() % 10;
    std::cout << mano[2] << std::endl;

    if (std::find(mano.begin(), mano.end(), nbAlea != mano.end())){
         std::cout << "Yes" << std::endl;
    }


    return 0;
}
