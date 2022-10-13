#include<iostream>
#include"question3.h"
#include <string>

using std::cout;
using std::cin;

int main()
{
    auto choice = 'n';
    string binaryInput;
        
    do
    {
        std::cout<<"Please enter an 8-digit binary value to be converted to decimal.\n";
        std::cin>>binaryInput;    
        while(binaryInput.size() != 8)
        {
                std::cout<<"Please enter an 8-digit binary value to be converted to decimal.\n";
                std::cin>>binaryInput;
        }
    
    int decimal;
    decimal = binary_to_decimal(binaryInput);

    cout<<"The factorial sequence for "<<binaryInput<<" is "<<decimal<<"\n";
    cout<<"Enter Y to continue\n";
    cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');

    return 0;
}