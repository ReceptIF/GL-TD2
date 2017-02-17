#ifndef GL_TD2_E5_H
#define GL_TD2_E5_H


#include "Etat.h"

class E5 : Etat {
    E5(string name);

    virtual ~E5();

    virtual void print() const;

    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //GL_TD2_E5_H
