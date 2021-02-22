#include <iostream>

bool returnThirdLSB(int8_t integer)
{
    return (integer & 4);
}

int main()
{
    int8_t  integer = 87;
    bool thridLSB = returnThirdLSB(integer);
}