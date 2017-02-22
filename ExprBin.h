
#ifndef GL_TD2_EXPRBIN_H
#define GL_TD2_EXPRBIN_H

#include <iostream>
#include <string>
#include <map>

#include "Expr.h"

using namespace std;

class ExprBin : public Expr {
    protected:
      	int valeur1;
      	int valeur2;
      	Symbole operateur;
  
    public:
    	int calculate();
        ExprBin(int valeur1, int valeur2, Symbole operateur);
        ~ExprBin() {}
        double eval(const map<string, double> & valeurs);
};


#endif //GL_TD2_EXPRBIN_H
