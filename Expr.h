#ifndef GL_TD2_EXPR_H
#define GL_TD2_EXPR_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class Expr : public Symbole {
protected:
    int valeur;
public:
    Expr(int valeur) : valeur(valeur), Symbole(EXPR) {}
    Expr(int valeur,int ident) : valeur(valeur), Symbole(ident) {}
    virtual ~Expr() {}
    virtual void print();
    virtual int eval() {return valeur;};
};


#endif //GL_TD2_EXPR_H
