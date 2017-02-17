#include <iostream>
#include "Lexer.h"
#include "Automate.h"
#include "E0.h"

int main() {
    Automate automate;
    E0 *e = new E0("E0");
    Lexer lexer("(1525214+569)?+856?");
    Symbole s = lexer.getNext(true);
    automate.decalage(&s, e);
    
    return 0;
}
