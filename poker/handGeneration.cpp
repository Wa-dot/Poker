#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */

#include <iostream>
#include "Card.h"

#include <vector>

using namespace std;

int main(){


    //  generation du vecteur qui dis si une carte est prise
    //   on retient que l'indice

    int i = 1;
    vector<int> carteDejaPrise;
    vector<Card> handJ1;
    while (carteDejaPrise.size()<5){
            cout<< "il y a : " << i <<" carte(s) dans la main"<<endl;
            carteDejaPrise.push_back(i);
            i+=1;

    }

    for(int j = 0; j<carteDejaPrise.size();j++){
            cout<<"la carte "<<j<<" est"<<carteDejaPrise[j]<<endl;
    }
}

