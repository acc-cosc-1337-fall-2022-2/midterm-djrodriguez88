#include<iostream>
#include "question2.h"

using std::string;
using std::cout;
using std::cin;

int main()
{
    auto choice = 'n';
    int numInput;
        
    do
    {
        std::cout<<"Please enter an integer number between 1 and 15.\n";
        std::cin>>numInput;    
        while(numInput < 0 || numInput > 15)
        {
                std::cout<<"Please enter an integer between 1 and 15.\n";
                std::cin>>numInput;
        }
    
    string fibSequence;
    fibSequence = get_fib_sequence(numInput);

    cout<<"The fibonacci sequence for "<<numInput<<" is "<<fibSequence<<"\n";
    cout<<"Enter Y to continue\n";
    cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');

    return 0;
}