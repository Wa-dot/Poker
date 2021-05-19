//
// Created by wandr on 06/05/2021.
//g++ -std=c++11 -c main.cpp             Compilation
//g++ -o comb main.o                     Executable
#include <iostream>
#include <vector>
#include <algorithm>
//#include "combination.h"
/*
int dblTriplAndCo()
{
    for (int i = 0; i <= handVector.end(); i++)
    {

        if (std::find(handVector.begin()+i, handVector.end(),handVector[i]) == 2)
        {
            std::cout << "Doublé"<<std::endl;
        }
        else if (std::find(handVector.begin()+i, handVector.end(),handVector[i]) == 3)
        {
            std::cout << i<<handVector.begin()+i<<" = triplé";
        }
    }
}*/




#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
std::vector<int> hand{{'T', 4},{'C', 4},{'P', 5}, {'C', 4}, {'T', 6}};      
int n1 = 3;
int n2 = 5;
auto is_even = [](int i){ return i%2 == 0; };

int main()
{ 

    for (auto i = hand.begin(); i < hand.end(); i++)
    {
        std::cout << "-" << *i << std::endl;
    }
    //int result1 = std::count(begin(v), end(v), v[0][1]);
    //printf("%d\n",result1);
}
/*    (result1 != std::end(v))
        ? std::cout << "v contains " << n1 << '\n'
        : std::cout << "v does not contain " << n1 << '\n';
 
    (result2 != std::end(v))
        ? std::cout << "v contains " << n2 << '\n'
        : std::cout << "v does not contain " << n2 << '\n';
 */