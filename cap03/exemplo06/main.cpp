// Exemplo 06.2
// Demonstracao da classe GradeBook depois de separ
// sua interface de sua implementacao.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // Inclui a definicao da classe GradeBook

// A funcao main inicia a execucao do programa
int main()
{
   // Cria dois objectos GradeBook
   GradeBook gradeBook1( "CS101 Introdution To The C++ Programming" );
   GradeBook gradeBook2( "CS102 Data Structure in C++" );

   // Exibe o valor inicial de courseName para cada objecto
   cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;

   return 0; // O programa foi executado com sucesso
} // Fim da main
