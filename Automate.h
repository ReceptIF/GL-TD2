#ifndef GL_TD2_AUTOMATE_H
#define GL_TD2_AUTOMATE_H

#include <vector>
#include "Symbole.h"
#include "Etat.h"
#include "Lexer.h"

using namespace std;

class Automate {
protected :
    vector<Symbole *> symbolstack;
    vector<Etat *> statestack;
    Lexer *lexer;

public:
    Automate(string chaine);

    ~Automate();

    void decalage(Symbole *s, Etat *e);

    void reduction(int n, Symbole *s);

    void lecture();
};


#endif //GL_TD2_AUTOMATE_H
