#include<iostream>
#include "question1.h"

using std::string;
using std::cout;
using std::cin;

int main()
{
    auto choice = 'n';
    do
    {
    double salesAmount;
    std::cout<<"Please enter the amount of sales for the employee.\n";
    std::cin>>salesAmount;
    
    double salesCommission;
    salesCommission = get_sales_commission(salesAmount);

    cout<<"Sales of "<<salesAmount<<" yields a commission of "<<salesCommission<<"\n";
    cout<<"Enter Y to continue\n";
    cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');

    return 0;
}