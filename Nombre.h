#ifndef GL_TD2_NOMBRE_H
#define GL_TD2_NOMBRE_H

#include <iostream>
#include <string>
#include <map>

#include "Expr.h"

using namespace std;

class Nombre : public Expr {
public:
    Nombre(int valeur) : Expr(valeur,NOMBRE) {};

    ~Nombre() {};

    void print() { cout << valeur << " ";};

    int eval() {return valeur;};
};


#endif //GL_TD2_NOMBRE_H
