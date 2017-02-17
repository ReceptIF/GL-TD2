//
// Created by Olivier VICENTE on 14/02/2017.
//

#ifndef GL_TD2_EXPR_H
#define GL_TD2_EXPR_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class Expr : public Symbole {
    public:
        Expr():Symbole(EXPR) {} //TODO : EXPR aulieu de 0 (cf poly page 92)
        ~Expr() {}
        double eval(const map<string, double> & valeurs);
};


#endif //GL_TD2_EXPR_H
