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
			cout << "Réduction de E7" << endl;
			automate->reduction(3, s);
			break;
		case MULT:
			cout << "Decalage de E7 vers E5" << endl;
			automate->decalage(s, new E5("E5"));
			break;
		case FERMEPAR:
			cout << "Réduction de E7" << endl;
			automate->reduction(3, s);
			break;
		case EoF:
			cout << "Réduction de E7" << endl;
			automate->reduction(3, s);
			break;
		default:
			cout << "default" << endl;
			break;
	}
    return false;
}
