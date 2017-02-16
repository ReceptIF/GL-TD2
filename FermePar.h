//
// Created by Theo THIBAULT on 16/02/2017.
//

#ifndef GL_TD2_FERMEPAR_H
#define GL_TD2_FERMEPAR_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class FermePar : public Symbole {
    public:
        FermePar():Symbole(')') {}
        ~FermePar() {}
};


#endif //GL_TD2_FERMEPAR_H
