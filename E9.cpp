#include "E9.h"

E9::E9(const string name) : Etat(name) {

}

E9::~E9() {

}

void E9::print() const {
    Etat::print();
}

bool E9::transition(Automate *automate, Symbole *s) {
	switch(*s){
		case PLUS:
			cout << "Reduction de E9 vers E4" << endl;
			//automate->decalage(s, new E2("E2"));
			break;
		case MULT:
			cout << "Reduction de E9 vers E4" << endl;
			//automate->decalage(s, new E3("E3"));
			break;
		case FERMEPAR:
			cout << "Reduction de E9 vers E4" << endl;
			//automate->decalage(s, new E1("E1"));
			break;
		case EoF:
			cout << "Reduction de E9 vers E4" << endl;
			//automate->decalage(s, new E1("E1"));
			break;
		default:
			cout << "default" << endl;
			break;
	}
    return false;
}
