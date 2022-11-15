// Exemplo 07.2: GradeBook.cpp
// Implementacao das definicoes de funcao-membro de GradeBook.
// A funcao setCourseName realiza a validacao.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"  // Inclui a definicao de classe GradeBook

// O construtor inicializa courseName com o valor fornecido como argumento
GradeBook::GradeBook( string name ) {
   setCourseName( name ); // Valida e armazena courseName
} // Fim do construtor GradeBook

// Funcao que configura o nome do curso;
// assegura que nome do curso tenha no meximo 25 caracteres
void GradeBook::setCourseName( string name ) {
   if ( name.length() <= 25 ) // Se o nome tiver 25 ou menos caracteres
      courseName = name;      // Armazena o nome do curso no objecto


   if ( name.length() > 25 ) {         // Se o nome tiver mais de 25 caracteres

      // Configura CourseName com os primeiros 25 caracteres fornecidos como parametro name
      courseName = name.substr(0, 25);  // inicia em 0, comprimento de 25

      cout << "Name \"" << name << "\" exceeds maximum length(25).\n"
           << "Limiting courseName to first 25 characters.\n" << endl;
   } // Fim do if

} // Fim da funcao setCourseName

// Funcao para obter o nome do curso
string GradeBook::getCourseName() {
   return courseName; // Retorna courseName do objecto
} // Fim da funcao getCourseName

// exibe uma mensagem de boas vindas para o usurio GradeBook
void GradeBook::displayMessage() {
   // Chama getCourseName para obter o nome do curso
   cout << "Welcome to the grade book for: " << getCourseName() << "!" << endl;
} // Fim da funcao displayMessage

// Funcao destrutora
GradeBook::~GradeBook( ) {
   // dctor
}
