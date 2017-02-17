#ifndef GL_TD2_E4_H
#define GL_TD2_E4_H


#include "Etat.h"

class E4 : Etat {
    E4(string name);

    virtual ~E4();

    virtual void print() const;

    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //GL_TD2_E4_H
