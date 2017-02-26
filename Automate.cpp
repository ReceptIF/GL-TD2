#include "Automate.h"
#include "E0.h"

Automate::Automate(string chaine) {
    lexer = new Lexer(chaine);
    Etat * beginstate = new E0("E0");
    Symbole * endOfFile = new EndOfFile();
    statestack.push_back(beginstate);
    symbolstack.push_back(endOfFile);
    accepted = false;
    error = false;
}

void Automate::decalage(Symbole *s, Etat *e) {
    printSymbolStack();
    printStateStack();

    if(*s != EXPR){
        symbolstack.push_back(s);
        lexer->getNext();
    }
    statestack.push_back(e);

    cout << " " << "décalage : ";
    e->print();
    cout << endl;
    printSymbolStack();
    printStateStack();
    cout << endl << endl;
}

void Automate::reduction(int n, Symbole *s) {
    printSymbolStack();
    printStateStack();

    for (int i = 0; i < n; i++) {
        delete (statestack.back());
        statestack.pop_back();
    }
    symbolstack.push_back(s);

    cout << " réduction : " << n << endl;
    printSymbolStack();
    printStateStack();
    cout << endl << endl;

    statestack.back()->transition(*this, s);
}

void Automate::lecture() {
    Symbole *s = lexer->lookNext();
    while (!accepted && !error) {
        statestack.back()->transition(*this,s);
        s = lexer->lookNext();
    }
    if(error){
        cout << "Une erreur s'est produite : la chaîne n'est pas valide.";
    }else {
        cout << "Le résultat est : " << symbolstack.back()->eval();
    }
}

Automate::~Automate() {
    delete lexer;
    while(!statestack.empty()){
        delete (statestack.back());
        statestack.pop_back();
    }
    while(!symbolstack.empty()){
        delete (symbolstack.back());
        symbolstack.pop_back();
    }
}

void Automate::printSymbolStack() {
    cout << " S: ";
    for(int i=0;i<symbolstack.size();i++){symbolstack.at(i)->print();}
    cout << endl;
}

void Automate::printStateStack() {
    cout << " E: ";
    for(int i=0;i<statestack.size();i++){statestack.at(i)->print();}
    cout << endl;
}
