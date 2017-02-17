#include "E7.h"
#include "ExprPlus.h"
#include "Expr.h"
#include "E5.h"
#include "Automate.h"

E7::E7(const string name) : Etat(name) {

}

E7::~E7() {

}

void E7::print() const {
    Etat::print();
}

bool E7::transition(Automate &automate, Symbole *s) {
    Symbole * exprD;
    Symbole * exprG;
    switch (*s) {
        case NOMBRE :
        case PLUS :
            exprD = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            exprG = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new ExprPlus(exprG,exprD));
            break;
        case MULT :
            automate.decalage(s, new E5("Etat 5"));
            break;
        case OUVREPAR :
        case FERMEPAR :
            exprD = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            exprG = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new ExprPlus(exprG,exprD));
            break;
        case EXPR :
        case ENDOFFILE :
            exprD = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            exprG = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new ExprPlus(exprG,exprD));
            break;
        default:
            break;
    }
    return false;
}
