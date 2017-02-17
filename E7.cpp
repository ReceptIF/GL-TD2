#include "E7.h"

E7::E7(const string name) : Etat(name) {

}

E7::~E7() {

}

void E7::print() const {
    Etat::print();
}

bool E7::transition(Automate *automate, Symbole *s) {
	switch(*s){
		case PLUS:
			cout << "Reduction de E7 vers E2" << endl;
			//automate->decalage(s, new E2("E2"));
			break;
		case MULT:
			cout << "Decalage de E7 vers E5" << endl;
			automate->decalage(s, new E5("E5"));
			break;
		case FERMEPAR:
			cout << "Reduction de E7 vers E2" << endl;
			//automate->decalage(s, new E1("E1"));
			break;
		case EoF:
			cout << "Reduction de E7 vers E2" << endl;
			//automate->decalage(s, new E1("E1"));
			break;
		default:
			cout << "default" << endl;
			break;
	}
    return false;
}
