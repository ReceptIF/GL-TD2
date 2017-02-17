#include "E8.h"

E8::E8(const string name) : Etat(name) {

}

E8::~E8() {

}

void E8::print() const {
    Etat::print();
}

bool E8::transition(Automate *automate, Symbole *s) {
	switch(*s){
		case PLUS:
			cout << "Reduction de E8 vers E3" << endl;
			//automate->decalage(s, new E2("E2"));
			break;
		case MULT:
			cout << "Reduction de E8 vers E3" << endl;
			//automate->decalage(s, new E3("E3"));
			break;
		case FERMEPAR:
			cout << "Reduction de E8 vers E3" << endl;
			//automate->decalage(s, new E1("E1"));
			break;
		case EoF:
			cout << "Reduction de E8 vers E3" << endl;
			//automate->decalage(s, new E1("E1"));
			break;
		default:
			cout << "default" << endl;
			break;
	}
    return false;
}
