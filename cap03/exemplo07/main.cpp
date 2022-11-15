// Exemplo 07.3: main.cpp
// Cria e manipula um objecto GradeBook; ilustra a validacao.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // Inclui a definicao da classe GradeBook

// A funcao main inicia a execucao do programa
int main()
{
   // Cria dois objectos GradeBook;
   // nome inicial de gradeBook1 e muito longo
   GradeBook gradeBook1("CS101 Introdution to Programming in C++");
   GradeBook gradeBook2("CS102 C++ Data Structure");

   // Exibe courseName de cada GradeBook
   cout << "gradebook's initial course name is: "
        << gradeBook1.getCourseName()
        << "\ngradebook's initial course name is: "
        << gradeBook2.getCourseName() << endl;

   // modifica courseName do gradeBook1 (com uma string de comprimento valido)
   gradeBook1.setCourseName( "CS101 C++ Programming" );

   // Exibe courseName de cada GradeBook
   cout << "gradebook's initial course name is: "
        << gradeBook1.getCourseName()
        << "\ngradebook's initial course name is: "
        << gradeBook2.getCourseName() << endl;

   return 0; // Indica terminacao bem-sucedida

} // Fim da funcao main
