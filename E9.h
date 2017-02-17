#ifndef GL_TD2_E9_H
#define GL_TD2_E9_H


#include "Etat.h"

class E9 : Etat {
    E9(string name);

    virtual ~E9();

    virtual void print() const;

    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //GL_TD2_E9_H
