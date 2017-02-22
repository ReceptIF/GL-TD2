#include "ExprBin.h"

ExprBin::ExprBin(int valeur1, int valeur2, Symbole operateur) {
  this->valeur1 = valeur1;
  this->valeur2 = valeur2;
  this->operateur = operateur;
  this->ident = EXPRBIN;
}

int ExprBin::calculate() {
	if(this->operateur == MULT) {
		return valeur2 * valeur1;
	} else if(this->operateur == PLUS) {
		return valeur1 + valeur2;
	} else
		return -1;
}

double ExprBin::eval(const map<string, double> & valeurs) {
  
  return valeur;
  
}

