#ifndef GL_TD2_EXPR_H
#define GL_TD2_EXPR_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class Expr : public Symbole {
public:
    Expr() : Symbole(EXPR) {}
    virtual ~Expr() {}

    virtual double eval(const map<string, double> &valeurs) {return 0;};
};


#endif //GL_TD2_EXPR_H
