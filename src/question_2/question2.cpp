#include "question2.h"
#include <string>

using std:: string;
using std:: to_string;

bool test_config()
{
    return true;
}

std::string get_fib_sequence(int num)
{
    string fibString;
    int fibNum1 = 0;
    int fibNum2 = 1;
    int fibNext = 0;

    for(int i = 0; i <= num; i++)
    {
        if(i == 0)
        {
            fibString = "0";
            continue;
        }
        if(i == 2)
        {
            fibString = fibString + " 1";
            continue;
        }

        fibNext = fibNum1 + fibNum2;
        fibNum1 = fibNum2;
        fibNum2 = fibNext;

        fibString += " " + to_string(fibNext);       

    }
    return fibString;
}