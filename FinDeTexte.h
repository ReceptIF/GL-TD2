//
// Created by Theo THIBAULT on 17/02/2017.
//

#ifndef GL_TD2_FINDETEXTE_H
#define GL_TD2_FINDETEXTE_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class FinDeTexte : public Symbole {
    public:
        FinDeTexte():Symbole(FINDETEXTE) {}
        ~FinDeTexte() {}
};


#endif //GL_TD2_FINDETEXTE_H
