#ifndef GL_TD2_AUTOMATE_H
#define GL_TD2_AUTOMATE_H

#include <vector>
#include "Symbole.h"
#include "Etat.h"
#include "Lexer.h"

using namespace std;

class Automate {
public :
    vector<Symbole *> symbolstack;
    vector<Etat *> statestack;
    Lexer *lexer;
    bool accepted;
    bool error;

    Automate(string chaine);

    ~Automate();

    void decalage(Symbole *s, Etat *e);

    void reduction(int n, Symbole *s);

    void lecture();
private:
    void printSymbolStack();

    void printStateStack();
};


#endif //GL_TD2_AUTOMATE_H
