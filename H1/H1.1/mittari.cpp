#include "mittari.hh"

namespace mittari {
    void mittaa() {
        printf("mitataan...\n");
        printf("%i  \n", mittari::halkaisija);
        halkaisija = 12742;
        printf("%i \n", mittari::halkaisija);
    }
}