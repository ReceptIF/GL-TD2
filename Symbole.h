#ifndef GL_TD2_SYMBOLE_H
#define GL_TD2_SYMBOLE_H

#include <iostream>

enum SYMBOLE {
    PLUS = 0, MULT = 1, FERMEPAR = 2, OUVREPAR = 3, NOMBRE = 4, EXPR = 5, ENDOFFILE = 6
};


class Symbole {
protected:
    int ident;
public:
    Symbole(int id) : ident(id) {}

    int getIdent();

    virtual ~Symbole() {}

    virtual void print();

    virtual int eval();

    virtual operator int() const { return ident; }
};


#endif //GL_TD2_SYMBOLE_H
