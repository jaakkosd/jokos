#include "mittari.hh"
#include <iostream>

extern int mittari::halkaisija;

int main() {
    mittari::mittaa();
    printf("Maapallon halkaisija on: %i \n",mittari::halkaisija);
    return 0;
}
