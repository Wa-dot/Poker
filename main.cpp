/*WARNING implantation des modules du prof à faire
* .Getm_value() pour obtenir la valeur (transformer le code avec ça)
* .Getm_color() pour obtenir la couleur
*/

#include <iostream>
#include <vector>
#include <algorithm>
//using namespace std;//sert à ne pas mettre les std::
//vector test
std::vector<int> hand{1, 2, 12, 4, 5};                                      //vecteur test.
std::vector<int> answerValue{};
int answer;
int suite;

int dblTriplAndCo()
{
    for (int i = 0; i <= 4; i++)
    {
        if (std::count(hand.begin(), hand.end(), hand[i]) == 4)             //On vérifie s'il y a 4 cartes ayant la même valeur
        {
            std::cout << i << " = Carre -->" << hand[i] << std::endl;       //On écrit le résultat
            answer = 6;                                                     //On rentre le code de la réponse
            answerValue.push_back(hand[i]);                                 //On rentre les valeurs dans un vecteur
        }
        else if (std::count(hand.begin(), hand.end(), hand[i]) == 3)        //On vérifie s'il y a 3 cartes ayant la même valeur
        {
            std::cout << i << " = Triple -->" << hand[i] << std::endl;
            i += 3;                                                         //Permet de sauter les valeurs concernées et de passer à la prochaine combinaison.
            answer = 3;
            answerValue.push_back(hand[i]);
        }
        else if (std::count(begin(hand), end(hand), hand[i]) == 2)         //On vérifie s'il y a 2 cartes ayant la même valeur
        {
            std::cout << i << " = Double -->" << hand[i] << std::endl;
            i += 2;
            answer = +2;
            answerValue.push_back(hand[i]);
        }
        else
        {
            std::cout << "Pas de double/brelan/carre trouvé pour la carte :" << hand[i] << std::endl;    //Dans le cas où aucune des conditions n'est respectés on l'annonce
        }
        std::cout << "-------------------------------\n"<< std::endl;
    }

    /*
    * On regarde si la combinaison de valeur est une suite. 
    * -->On regarde si la valeur de la nième est égale à la nième+1 case -1.
    * Si c'est le cas on ajoute 1 à suite. Si les cinq valeurs se suivent on a une suite
    */
    for (int y = 0; y <= 4; y++)                                       
    {
        if (hand[y - 1] == hand[y] - 1)
        {
            suite++;
        }
    }
    if (suite == 4)
    {
        std::cout << " = Il y a une suite\n"<< std::endl;
    }

    std::cout << "-------------------------------\n"<< std::endl;

/*
    for (int i = 0; i <= answerValue.size(); i++)//On écrits les valeurs des combinaisons.
    {
        std::cout << "La(les) valeur(s) est(sont) -->" << answerValue[i] << std::endl;
    }

    std::cout << "C'est une combinaison de : " << answer << std::endl;
}*/

int main()
{
    std::cout << "-------------------------------\n";
    std::sort(hand.begin(), hand.end());                    //On trie la main

    std::cout << "Hand sort : \n";                          //On l'écrit.
    for (auto i = hand.begin(); i < hand.end(); i++)
    {
        std::cout << "-" << *i << std::endl;
    }
    std::cout << "-------------------------------\n";
    dblTriplAndCo();

    return 0;
}
