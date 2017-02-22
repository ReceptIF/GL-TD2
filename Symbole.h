
#ifndef GL_TD2_SYMBOLE_H
#define GL_TD2_SYMBOLE_H

enum SYMBOLE { PLUS, MULT, FERMEPAR, OUVREPAR, NOMBRE, VARIABLE, EXPR, EoF, EXPRPLUS, EXPRMULT };

class Symbole {
    protected:
        int ident;
    public:
        Symbole(int id) : ident(id) {}
        Symbole(const Symbole &source) {this->ident = source.ident;};
        virtual ~Symbole() {}
        char getValue();
        void print();
        operator int() const { return ident; }
};


#endif //GL_TD2_SYMBOLE_H