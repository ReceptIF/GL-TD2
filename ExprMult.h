#ifndef GL_TD2_EXPRMULT_H
#define GL_TD2_EXPRMULT_H


#include "ExprBin.h"

class ExprMult : public ExprBin{
public:
    ExprMult(Symbole * sGauche, Symbole * sDroite) : ExprBin(sGauche, sDroite) {};

    virtual ~ExprMult() {};

    virtual double eval(const map<string, double> &valeurs);
};


#endif //GL_TD2_EXPRMULT_H
