#ifndef GL_TD2_E8_H
#define GL_TD2_E8_H


#include "Etat.h"

class E8 : public Etat {
public:
    E8(string name);

    virtual ~E8();

    virtual void print() const;

    virtual bool transition(Automate &automate, Symbole *s);
private:
    void reductionR3(Automate &automate);
};


#endif //GL_TD2_E8_H
