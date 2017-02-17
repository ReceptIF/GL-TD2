//
// Created by Olivier VICENTE on 17/02/2017.
//

#ifndef GL_TD2_EXPRBIN_H
#define GL_TD2_EXPRBIN_H


#include "Expr.h"

class ExprBin : public Expr {
protected:
    Symbole s1;
    Symbole s2;
public:
    ExprBin(Symbole s1, Symbole s2) : Expr(), s1(s1), s2(s2) {};

    virtual ~ExprBin() {};

    virtual double eval(const map<string, double> &valeurs) = 0;
};


#endif //GL_TD2_EXPRBIN_H
