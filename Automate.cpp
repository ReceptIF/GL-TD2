#include "Automate.h"

Automate::Automate(string chaine) {
    lexer = new Lexer(chaine);
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
    statestack.front()->transition(*this, s);
}

void Automate::lecture() {
    Symbole *s = lexer->getNext();
    while (s->getIdent() != ENDOFFILE) {
        s->print();
        s = lexer->getNext();
    }
    s->print();
}

Automate::~Automate() {
    delete lexer;
}
