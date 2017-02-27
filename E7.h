#ifndef GL_TD2_E7_H
#define GL_TD2_E7_H


#include "Etat.h"

class E7 : public Etat {
public:
    E7(string name);

    virtual ~E7();

    virtual void print() const;

    virtual bool transition(Automate &automate, Symbole *s);
private:
    void reductionR2(Automate &automate);
};


#endif //GL_TD2_E7_H
