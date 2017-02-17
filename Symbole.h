//
// Created by Olivier VICENTE on 14/02/2017.
//

#ifndef GL_TD2_SYMBOLE_H
#define GL_TD2_SYMBOLE_H

enum SYMBOLE { PLUS, MULT, FERMEPAR, OUVREPAR, NOMBRE, VARIABLE, EXPR, FINDETEXTE };


class Symbole {
    protected:
        int ident;
    public:
        Symbole(int id) : ident(id) {}
        virtual ~Symbole() {}
        void print();
        int avoirJeton();
        operator int() const { return ident; }
        virtual int eval();
};


#endif //GL_TD2_SYMBOLE_H
