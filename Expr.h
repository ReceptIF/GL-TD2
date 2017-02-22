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
        int getValeur();
        virtual ~Expr() {}
};


#endif //GL_TD2_EXPR_H
