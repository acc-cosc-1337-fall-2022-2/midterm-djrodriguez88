#include<iostream>
#include "question4.h"

using std::string;
using std::cout;
using std::cin;

int main()
{
    auto choice = 'n';
    int numInput;
        
    do
    {
        std::cout<<"Please enter an integer number between 1 and 10.\n";
        std::cin>>numInput;    
        while(numInput < 0 || numInput > 10)
        {
                std::cout<<"Please enter an integer between 1 and 10.\n";
                std::cin>>numInput;
        }
    
    string factorialSeq;
    factorialSeq = get_factorial_sequence(numInput);

    cout<<"The factorial sequence for "<<numInput<<" is "<<factorialSeq<<"\n";
    cout<<"Enter Y to continue\n";
    cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');

    return 0;
}