#include "Automate.h"

Automate::Automate() {
    lexer = new Lexer();
}

void Automate::decalage(Symbole *s, Etat *e) {
    symbolstack.push_back(s);
    statestack.push_back(e);
}

void Automate::reduction(int n, Symbole *s) {
    for (int i = 0; i < n; i++) {
        delete (statestack.back());
        statestack.pop_back();
    }
    //lexer->putSymbol(s);
    statestack.top()->transition(*this, s);
}

Automate::~Automate() {
    delete lexer;
}
