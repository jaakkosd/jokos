//
// Created by mnuuj on 13.2.2021.
//

#include "mittari.h"


void mittari::mittaaYmparysmitta(Tiedot *output) {
    output->ymparysmitta = 40075; //km
}


mittari::Tiedot * mittari::mittaaKaikki(Tiedot *output) {
    output = new Tiedot{40075, sininen};
    return output;
}
