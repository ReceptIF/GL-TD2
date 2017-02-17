#include "Automate.h"
#include "E0.h"

Automate::Automate(string chaine) {
    lexer = new Lexer(chaine);
    Etat * beginstate = new E0("Etat 0");
    Symbole * endOfFile = new EndOfFile();
    statestack.push_back(beginstate);
    symbolstack.push_back(endOfFile);
}

void Automate::decalage(Symbole *s, Etat *e) {
    cout << "décalage : ";
    e->print();
    symbolstack.push_back(s);
    if(*s != EXPR){
        lexer->getNext();
    }
    statestack.push_back(e);
}

void Automate::reduction(int n, Symbole *s) {
    cout << "réduction : " << n << endl;
    for (int i = 0; i < n; i++) {
        delete (statestack.back());
        statestack.pop_back();
    }
    statestack.back()->transition(*this, s);
}

void Automate::lecture() {
    Symbole *s = lexer->lookNext();
    while (s->getIdent() != ENDOFFILE) {
        s->print();
        statestack.back()->transition(*this,s);
        s = lexer->lookNext();
    }
    s->print();
}

Automate::~Automate() {
    delete lexer;
}
