#include "E8.h"
#include "Expr.h"
#include "Automate.h"
#include "Symbole.h"

E8::E8(const string name) : Etat(name) {

}

E8::~E8() {

}

void E8::print() const {
    Etat::print();
}

bool E8::transition(Automate &automate, Symbole *s) {
    int valG;
    int valD;
    switch (*s) {
        case NOMBRE :
        case PLUS :
            valD = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            valG = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(valG*valD));
            break;
        case MULT :
            valD = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            valG = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(valG*valD));
            break;
        case OUVREPAR :
        case FERMEPAR :
            valD = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            valG = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(valG*valD));
            break;
        case EXPR :
        case ENDOFFILE :
            valD = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            valG = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(valG*valD));
            break;
        default:
            break;
    }
    return false;
}
