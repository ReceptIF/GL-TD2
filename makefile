EXE: main.o Automate.o Etat.o Expr.o Lexer.o Symbole.o
	g++ -o EXE main.o Automate.o Etat.o Expr.o Lexer.o Symbole.o

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
