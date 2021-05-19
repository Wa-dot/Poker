#include <iostream>
#include <vector>
#include <algorithm>
//using namespace std;//sert à ne pas mettre les std::
//vector test
std::vector<int> hand{4, 10, 4, 10, 4};
std::vector<int> answerValue{};
int answer;

int dblTriplAndCo()
{
    for (int i = 0; i <= 4; i++)
    {
        if (std::count(hand.begin(), hand.end(), hand[i]) == 4)
        {
            std::cout << i << " = Carre -->" << hand[i] << std::endl;
            answer = 6;
            answerValue.push_back(hand[i]);
        }
        else if (std::count(hand.begin(), hand.end(), hand[i]) == 3)
        {
            std::cout << i << " = Triple -->" << hand[i] << std::endl;
            i +=3;
            answer = 3;
            answerValue.push_back(hand[i]);
        }
        else if (std::count(begin(hand), end(hand), hand[i]) == 2)
        {
            std::cout << i << " = Double -->" << hand[i] << std::endl;
            i +=2;
            answer = +2;
            answerValue.push_back(hand[i]);
        }
        else{
            std::cout << "NOPPPPPPPPPPPPPP -->" << hand[i] << std::endl;
        }
    }
    for (int i = 0; i <= answerValue.size(); i++)
    {
        std::cout << "La(les) valeur(s) est(sont) -->" << answerValue[i] << std::endl;
    }
    std::cout << "C'est une combinaison de : " << answer << std::endl;
}

int main()
{
    std::cout << "-------------------------------\n";
    std::sort(hand.begin(), hand.end()); //Sorting the hand
                                         /*On peut enlever*/
    std::cout << "Hand sort : \n";
    for (auto i = hand.begin(); i < hand.end(); i++)
    {
        std::cout << "-" << *i << std::endl;
    } /*jusqu'ici*/
    std::cout << "-------------------------------\n";
    dblTriplAndCo();

    return 0;
}
