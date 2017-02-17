#ifndef GL_TD2_FERMEPAR_H
#define GL_TD2_FERMEPAR_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class FermePar : public Symbole {
public:
    void print();

    FermePar() : Symbole(FERMEPAR) {}

    ~FermePar() {}
};


#endif //GL_TD2_FERMEPAR_H
