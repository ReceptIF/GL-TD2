//
// Created by Theo THIBAULT on 16/02/2017.
//

#ifndef GL_TD2_OUVREPAR_H
#define GL_TD2_OUVREPAR_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class OuvrePar : public Symbole {
    public:
        OuvrePar():Symbole(OUVREPAR) {}
        ~OuvrePar() {}
};


#endif //GL_TD2_OUVREPAR_H
