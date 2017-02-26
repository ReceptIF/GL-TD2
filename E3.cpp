#include "E3.h"
#include "Expr.h"
#include "Automate.h"

E3::E3(const string name) : Etat(name) {

}

E3::~E3() {

}

void E3::print() const {
    Etat::print();
}

bool E3::transition(Automate &automate, Symbole *s) {
    int val;
    switch (*s) {
        case NOMBRE :
        case PLUS :
            val = automate.symbolstack.back()->eval();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(1, new Expr(val));
            break;
        case MULT :
            val = automate.symbolstack.back()->eval();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(1, new Expr(val));
            break;
        case OUVREPAR :
        case FERMEPAR :
            val = automate.symbolstack.back()->eval();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(1, new Expr(val));
            break;
        case EXPR :
        case ENDOFFILE :
            val = automate.symbolstack.back()->eval();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(1, new Expr(val));
            break;
        default:
            break;
    }
    return false;
}
