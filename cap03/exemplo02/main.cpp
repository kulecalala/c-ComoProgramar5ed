// Exemplo 02
// Funcao: Define a classe GradeBook com uma funcao-membro que aceita um paramentro;
//         Cria um objecto GradeBook e chama a funcao-membro displayMessage;
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>    // O programa utiliza a classe de string padrao c++
using std::string;
using std::getline;

// Define a classe GradeBook
class GradeBook {
   public:
      // Funcao que exibe uma mensagem de boas vindas ao usuario do GradeBook
      void displayMessage( string courseName ) {
         cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
      } // Fim da funcao DisplayMassege

}; // Fim da classe GradeBook

// A funcao main inicia a execucao do programa
int main()
{
   string nameOfCourse;    // String de caracteres para armazenar o nome do curso
   GradeBook myGradeBook;  // Cria um objecto GradeBook chamado myGradeBook

   // Prompt para a entrada do nome do curso
   cout << "Please enter the course name: " << endl;
   getline( cin, nameOfCourse ); // Le o nome de um curso com espacos em branco
   cout << endl; // Gera a saida de uma linha em branco

   // Chama a funcao displayMessage de myGradeBook
   // e passa nameOfCourse como argumento
   myGradeBook.displayMessage( nameOfCourse );

   return 0; // Indica terminacao bem sucedida

} // Fim de main

