RECEPTCOMP.exe: main.o Automate.o Etat.o Expr.o Lexer.o Symbole.o Mult.o Plus.o FermePar.o OuvrePar.o Nombre.o EndOfFile.o E0.o E1.o E2.o E3.o E4.o E5.o E6.o E7.o E8.o E9.o
	g++ -o RECEPTCOMP.exe main.o Automate.o Etat.o Expr.o Lexer.o Symbole.o Mult.o Plus.o FermePar.o OuvrePar.o Nombre.o EndOfFile.o E0.o E1.o E2.o E3.o E4.o E5.o E6.o E7.o E8.o E9.o

main.o: main.cpp Automate.h
	g++ -c main.cpp

Automate.o: Automate.cpp Automate.h Symbole.h Etat.h Lexer.h E0.h
	g++ -c Automate.cpp

Etat.o: Etat.cpp Etat.h Symbole.h
	g++ -c Etat.cpp

Expr.o: Expr.cpp Expr.h Symbole.h
	g++ -c Expr.cpp

Lexer.o: Lexer.cpp Lexer.h Symbole.h Nombre.h OuvrePar.h FermePar.h Plus.h Mult.h EndOfFile.h
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

Nombre.o: Nombre.cpp Nombre.h Expr.h
	g++ -c Nombre.cpp

EndOfFile.o: EndOfFile.cpp EndOfFile.h Symbole.h
	g++ -c EndOfFile.cpp

E0.o: E0.cpp E0.h Etat.h E1.h E2.h E3.h Automate.h
	g++ -c E0.cpp

E1.o: E1.cpp E1.h Etat.h E4.h E5.h Automate.h
	g++ -c E1.cpp

E2.o: E2.cpp E2.h Etat.h E3.h E6.h Automate.h
	g++ -c E2.cpp

E3.o: E3.cpp E3.h Etat.h Expr.h Automate.h
	g++ -c E3.cpp

E4.o: E4.cpp E4.h Etat.h E2.h E3.h E7.h Automate.h
	g++ -c E4.cpp

E5.o: E5.cpp E5.h Etat.h E2.h E3.h E8.h Automate.h
	g++ -c E5.cpp

E6.o: E6.cpp E6.h Etat.h E4.h E5.h E9.h Automate.h
	g++ -c E6.cpp

E7.o: E7.cpp E7.h Etat.h Expr.h E5.h Automate.h
	g++ -c E7.cpp

E8.o: E8.cpp E8.h Etat.h Expr.h Automate.h
	g++ -c E8.cpp

E9.o: E9.cpp E9.h Etat.h Expr.h Automate.h
	g++ -c E9.cpp

CLEAN:
	rm -f *.o *.EXE
