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
		case MULT:
			cout << "Réduction de E3 vers E5" << endl;
			//automate->reduction(s, new E2("E2"));
			break;
		case NOMBRE:
			cout << "Réduction de E3 vers E5" << endl;
			//automate->decalage(s, new E3("E3"));
			break;
		case EXPR:
			cout << "Réduction de E3 vers E5" << endl;
			//automate->decalage(s, new E1("E1"));
			break;
		case EoF:
			cout << "Réduction de E3 vers E5" << endl;
			//automate->decalage(s, new E1("E1"));
			break;
		default:
			cout << "default" << endl;
			break;
	}
    return false;
}
