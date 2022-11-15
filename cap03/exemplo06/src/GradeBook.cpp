// Exemplo 06.1
// Deficinicao de funcao-membro de GradeBook. Esse arquivo contem
// a implementacao das funcoes-membro prototipadas em GradeBook.h.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // Inclui a definicao de classe GradeBook

// O construtor incializa courseName com a string fornecida como argumento
GradeBook::GradeBook( string name ) {
   setCourseName( name ); // Chama a funcao set para incializar courseName
} // Fim do construtor

// Funcao para configurar o nome do curso
void GradeBook::setCourseName( string name ) {
   courseName = name; // Armazena o nome do curso no objecto
} // Fim da funcao setCourseName

// Funcao para obter o nome do curso
string GradeBook::getCourseName() {
   return courseName; // Retorna o nome do curso
} // Fim da funcao getCourseName

// Exibe uma mensagem de boas vindas para o usuario GradeBook
void GradeBook::displayMessage() {
   // Chama getCourseName para obter o nome do curso
   cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
} // Fim de displayMessage

GradeBook::~GradeBook()
{
   //dtor
}
