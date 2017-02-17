#include <iostream>
#include "Lexer.h"

using namespace std;

int main(int argc, char *argv[]) {

    if (argc <= 1) {
        cout << "\nLe programme n'a pas assez d'arguments\n" << endl;
    } else if(argc >= 3){
        cout << "\nLe programme a trop d'arguments\n" << endl;
    } else {
        Lexer lexer(argv[1]);

        Symbole *s = lexer.getNext();
        while (s->getIdent() != ENDOFFILE) {
            s->print();
            s = lexer.getNext();
        }
        s->print();
    }
    return 0;
}
