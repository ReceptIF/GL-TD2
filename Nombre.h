#ifndef GL_TD2_NOMBRE_H
#define GL_TD2_NOMBRE_H

#include <iostream>
#include <string>
#include <map>

#include "Expr.h"

using namespace std;

class Nombre : public Expr {
  
    public:
    	int getValeur();
        Nombre(int valeur):Expr(valeur) {this->ident = NOMBRE; this-> valeur = valeur;}
        ~Nombre() {}
};

#endif //GL_TD2_NOMBRE_H