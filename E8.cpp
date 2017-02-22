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
			cout << "Réduction de E8" << endl;
			automate->reduction(3, s);
			break;
		case MULT:
			cout << "Réduction de E8" << endl;
			automate->reduction(3, s);
			break;
		case FERMEPAR:
			cout << "Réduction de E8" << endl;
			automate->reduction(3, s);
			break;
		case EoF:
			cout << "Réduction de E8" << endl;
			automate->reduction(3, s);
			break;
		default:
			return true;
	}
    return false;
}
