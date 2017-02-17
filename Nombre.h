#ifndef GL_TD2_NOMBRE_H
#define GL_TD2_NOMBRE_H

#include <iostream>
#include <string>
#include <map>

#include "Expr.h"

using namespace std;

class Nombre : public Expr {
protected:
    int valeur;

public:
    Nombre(int valeur);

    ~Nombre() {}

    void print();

    double eval(const map<string, double> &valeurs);
};


#endif //GL_TD2_NOMBRE_H
