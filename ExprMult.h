#ifndef GL_TD2_EXPRMULT_H
#define GL_TD2_EXPRMULT_H


#include "ExprBin.h"

class ExprMult : public ExprBin{
public:
    ExprMult(Symbole s1, Symbole s2) : ExprBin(s1, s2) {};

    virtual ~ExprMult();

    virtual double eval(const map<string, double> &valeurs);
};


#endif //GL_TD2_EXPRMULT_H
