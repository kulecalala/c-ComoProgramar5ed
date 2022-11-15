// exemplo012: main.cpp
// Cria um objecto da classe GradeBook e invoca a sua funcao determineClassAverege.
#include <iostream>

#include "GradeBook.h" // Inclui a definicao da classe GradeBook

using namespace std;

int main()
{
   // Cria o objecto da classe myGradeBook da classe GradeBook e
   // passa o nome do curso para o construtor
   GradeBook myGradeBook("CS101 C++ Programming");

   myGradeBook.displayMessage(); // exibe a mensagem de boas vindas
   myGradeBook.determineClassAverage(); // calcula a media das 10 notas

   return 0; // indica terminacao bem-sucedidade

} // fim de main
