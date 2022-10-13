#include "question4.h"
#include <string>

using std:: string;
using std:: to_string;

bool test_config()
{
    return true;
}

std::string get_factorial_sequence(int num)
{
    string factSequence;
    int count = 1;
    int factProduct = 1;

    while (num > 0)
    {
        factProduct = (factProduct)*(num);
        num--;
    
        factSequence += to_string(count)+"x";
        count++;
        
    }
    factSequence.erase(factSequence.end()-1);
    factSequence += "="+to_string(factProduct);

    return factSequence;
}