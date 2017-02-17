#ifndef GL_TD2_OUVREPAR_H
#define GL_TD2_OUVREPAR_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class OuvrePar : public Symbole {
public:
    void print();

    OuvrePar() : Symbole(OUVREPAR) {}

    ~OuvrePar() {}
};


#endif //GL_TD2_OUVREPAR_H
