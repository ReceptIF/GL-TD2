#include <iostream>

#include "Automate.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        cout << "\nLe programme n'a pas assez d'arguments\n" << endl;
    } else if(argc >= 3){
        cout << "\nLe programme a trop d'arguments\n" << endl;
    } else {
        Automate * automate = new Automate(argv[1]);
        automate->lecture();
        delete automate;
    }
    return 0;
}
