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

class Nombre : public Symbole {
    protected:
      int valeur;
  
    public:
        Nombre(int valeur):Symbole(NOMBRE),valeur(valeur) {};
        ~Nombre() {}
        double eval(const map<string, double> & valeurs);
};


#endif //GL_TD2_NOMBRE_H
