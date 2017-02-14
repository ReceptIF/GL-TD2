//
// Created by Olivier VICENTE on 14/02/2017.
//

#ifndef GL_TD2_SYMBOLE_H
#define GL_TD2_SYMBOLE_H


class Symbole {
    protected:
        int ident;
    public:
        Symbole(int id) : ident(id) {}
        virtual ~Symbole() {}
        void print();
        operator int() const { return ident; }
};


#endif //GL_TD2_SYMBOLE_H
