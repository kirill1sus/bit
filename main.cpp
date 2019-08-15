#include <iostream>
#include "bit.h"
////битовые операции
using namespace std;


int main()
{

    uint32_t test ;//64?
    input("11000011110000111100001111000011",test);
    format_bit(test);
    palin(test);
    cout << endl;
    format_bit(trans(test));

    return 0;
}