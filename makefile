RECEPTCOMP.exe: main.o Automate.o Etat.o Expr.o Lexer.o Symbole.o Mult.o Plus.o FermePar.o OuvrePar.o
	g++ -o RECEPTCOMP.exe main.o Automate.o Etat.o Expr.o Lexer.o Symbole.o Mult.o Plus.o FermePar.o OuvrePar.o

main.o: main.cpp
	g++ -c main.cpp

Automate.o: Automate.h Automate.cpp
	g++ -c Automate.cpp

Etat.o: Etat.cpp Etat.h Symbole.h Automate.h
	g++ -c Etat.cpp

Expr.o: Expr.cpp Expr.h Symbole.h
	g++ -c Expr.cpp

Lexer.o: Lexer.cpp Lexer.h 
	g++ -c Lexer.cpp

Symbole.o: Symbole.cpp Symbole.h
	g++ -c Symbole.cpp

Mult.o: Mult.cpp Mult.h Symbole.h
	g++ -c Mult.cpp

Plus.o: Plus.cpp Plus.h Symbole.h
	g++ -c Plus.cpp

FermePar.o: FermePar.cpp FermePar.h Symbole.h
	g++ -c FermePar.cpp

OuvrePar.o: OuvrePar.cpp OuvrePar.h Symbole.h
	g++ -c OuvrePar.cpp
