// Exemplo014: main.cpp
// Gria o objecto da classe GradeBook e invoca sua funcao-membro determineClassAverage
#include <iostream>

// Inclui a definicao da classe GradeBook de GradeBook.h
#include "GradeBook.h"

using namespace std;

// A fucao main inicia a execucao do programa
int main()
{
   // Cria o objecto myGradeBook da classe GradeBook e
   // passa o nome do curso para o construtor
   GradeBook myGradeBook("CS101 C++ Programming");

   myGradeBook.displayMessage();        // Exibe a mensagem de boas-vindas
   myGradeBook.determineClassAverage(); // Calcula a media das notas

   return 0; // Indica terminacao bem sucedida

} // Fim de main
