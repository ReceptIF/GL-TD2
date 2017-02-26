#include "E9.h"
#include "Expr.h"
#include "Automate.h"

E9::E9(const string name) : Etat(name) {

}

E9::~E9() {

}

void E9::print() const {
    Etat::print();
}

bool E9::transition(Automate &automate, Symbole *s) {
    int val;
    switch (*s) {
        case NOMBRE :
            automate.error = true;
            break;
        case PLUS :
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            val = automate.symbolstack.back()->eval();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(val));
            break;
        case MULT :
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            val = automate.symbolstack.back()->eval();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(val));
            break;
        case OUVREPAR :
            automate.error = true;
            break;
        case FERMEPAR :
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            val = automate.symbolstack.back()->eval();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(val));
            break;
        case EXPR :
            automate.error = true;
            break;
        case ENDOFFILE :
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            val = automate.symbolstack.back()->eval();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete (automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(val));
            break;
        default:
            break;
    }
    return false;
}
