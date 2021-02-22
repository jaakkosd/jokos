#include <iostream>

void changeNthLSB(int8_t &integer, int n)
{
    integer ^= 1UL << n-1;
}

int main()
{
    int8_t  integer = 15;
    int n = 3;
    changeNthLSB(integer, n);
    printf("%i",integer);
}