//
// Created by mnuuj on 13.2.2021.
//

#ifndef H1_2_MITTARI_H
#define H1_2_MITTARI_H


#include <string>

class mittari {
public:
    enum Vari{
        tyhja,
        sininen,
        keltainen,
        vihrea
    };

    struct Tiedot{
        int ymparysmitta = 0;
        Vari vari=tyhja;
    };

    void static mittaaYmparysmitta(Tiedot  * output );
    void static mittaaKaikki(Tiedot * output );
};


#endif //H1_2_MITTARI_H
