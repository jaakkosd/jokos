#include <iostream>
#include "mittari.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    mittari::Tiedot tiedot{0, mittari::keltainen};

    mittari::mittaaYmparysmitta(&tiedot);
    printf("Ymparysmitta on %i\n", tiedot.ymparysmitta);

    mittari::Tiedot * variptr = mittari::mittaaKaikki(&tiedot);
    tiedot = *variptr;
    printf("Vari on %i\n", tiedot.vari);

    return 0;
}
