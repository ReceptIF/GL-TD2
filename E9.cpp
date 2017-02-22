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
			//cout << "Réduction de E9" << endl;
			automate->reduction(3, s);
			break;
		case MULT:
			//cout << "Réduction de E9" << endl;
			automate->reduction(3, s);
			break;
		case FERMEPAR:
			//cout << "Réduction de E9" << endl;
			automate->reduction(3, s);
			break;
		case EoF:
			//cout << "Réduction de E9" << endl;
			automate->reduction(3, s);
			break;
		default:
			//cout << "default" << endl;
			break;
	}
    return false;
}
