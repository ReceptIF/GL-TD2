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
        Expr(int valeur):Symbole(EXPR) {this->valeur = valeur;} 
        int getValeur() {return valeur;}
        virtual ~Expr() {}
        virtual double eval(const map<string, double> & valeurs) = 0;
};


#endif //GL_TD2_EXPR_H
