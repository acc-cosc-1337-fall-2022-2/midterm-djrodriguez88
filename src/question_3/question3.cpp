#include "question3.h"
#include <iostream>

using std::cout;

bool test_config()
{
    return true;
}

int binary_to_decimal(string bin)
{
    int counter = 0;
    int btd[8] = {128, 64, 32, 16, 8, 4, 2, 1};

    for(int i = 0; i <= 7 ; i++)
    {
        if(bin[i] == '1')
        {
            counter += btd[i];
        }
        else
        {
            counter += 0;
        }
    }

    return counter;
}