#ifndef GL_TD2_MULT_H
#define GL_TD2_MULT_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class Mult : public Symbole {
public:
    Mult() : Symbole(MULT) {}

    ~Mult() {}
};


#endif //GL_TD2_MULT_H
