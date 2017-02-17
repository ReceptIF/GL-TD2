#include "E3.h"

E3::E3(const string name) : Etat(name) {

}

E3::~E3() {

}

void E3::print() const {
    Etat::print();
}

bool E3::transition(Automate *automate, Symbole *s) {
	switch(*s){
		case PLUS:
			cout << "Réduction de E3" << endl;
			automate->reduction(1, s);
			break;
		case MULT:
			cout << "Réduction de E3" << endl;
			automate->reduction(1, s);
			break;
		case FERMEPAR:
			cout << "Réduction de E3" << endl;
			automate->reduction(1, s);
			break;
		case EoF:
			cout << "Réduction de E3" << endl;
			automate->reduction(1, s);
			break;
		default:
			cout << "default E3" << endl;
			break;
	}
    return false;
}
