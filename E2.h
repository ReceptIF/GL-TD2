#ifndef GL_TD2_E2_H
#define GL_TD2_E2_H


#include "Etat.h"

class E2 : public Etat {
public:
    E2(string name);

    virtual ~E2();

    virtual void print() const;

    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //GL_TD2_E2_H
