//
// Created by Théo THIBAULT on 14/02/2017.
//

#ifndef GL_TD2_NOMBRE_H
#define GL_TD2_NOMBRE_H

#include <iostream>
#include <string>
#include <map>

#include "Expr.h"

using namespace std;

class Nombre : public Expr {
  
    public:
    	int getValeur(){ return valeur; }
        Nombre(int valeur):Expr(valeur) {this->ident = NOMBRE; this-> valeur = valeur;}
        ~Nombre() {}
        double eval(const map<string, double> & valeurs);
};


#endif //GL_TD2_NOMBRE_H
