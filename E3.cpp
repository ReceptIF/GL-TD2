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
            automate.error = true;
            break;
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
            automate.error = true;
            break;
        case FERMEPAR :
            val = automate.symbolstack.back()->eval();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(1, new Expr(val));
            break;
        case EXPR :
            automate.error = true;
            break;
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
