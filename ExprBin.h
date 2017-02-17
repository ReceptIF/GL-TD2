//
// Created by Olivier VICENTE on 17/02/2017.
//

#ifndef GL_TD2_EXPRBIN_H
#define GL_TD2_EXPRBIN_H


#include "Expr.h"

class ExprBin : public Expr {
protected:
    Symbole * sGauche;
    Symbole * sDroite;
public:
    ExprBin(Symbole * sGauche, Symbole * sDroite) : Expr(), sGauche(sGauche), sDroite(sDroite) {};

    virtual ~ExprBin() {};

    virtual double eval(const map<string, double> &valeurs) = 0;
};


#endif //GL_TD2_EXPRBIN_H
