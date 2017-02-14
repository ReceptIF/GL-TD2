cmake_minimum_required(VERSION 3.6)
project(GL_TD2)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Symbole.cpp Symbole.h Expr.cpp Expr.h Etat.cpp Etat.h Automate.cpp Automate.h Lexer.cpp Lexer.h)
add_executable(GL_TD2 ${SOURCE_FILES} Symbole.cpp Symbole.h Expr.cpp Expr.h Etat.cpp Etat.h Automate.cpp Automate.h Lexer.cpp Lexer.h)