#ifndef GL_TD2_EXPRPLUS_H
#define GL_TD2_EXPRPLUS_H


#include "ExprBin.h"

class ExprPlus : public ExprBin{
public:
    ExprPlus(Symbole s1, Symbole s2) : ExprBin(s1,s2) {};

    ~ExprPlus() {};

    virtual double eval(const map<string, double> &valeurs);
};


#endif //GL_TD2_EXPRPLUS_H
