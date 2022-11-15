// Exemplo 05
// Definicao da classe GradeBook em um arquivo main separado.
#include <iostream>
using std::cout;
using std::endl;

#include <string>  // A classe GradeBook utiliza a class de string padrao c++
using std::string;

// Definicao da classe GradeBook
class GradeBook {
   public:
      // O construtor inicializa courseName com a string fornecida como argumento
      GradeBook( string name ) {
         setCourseName( name ); // Chama a funcao set para inicializar courseName
      } // Fim do construtor

      // Funcao set para configurar o nome do curso
      void setCourseName( string name ) {
         courseName = name; // Armazena o nome do curso no objecto
      } // Fim da funcao setCOurseName

      // Funcao get para pegar nome do curso
      string getCourseName() {
         return courseName; // Retorna o courseName do objecto
      } // Fim da funcao getCourseName

      // Funcao que da as boas vindas ao usuario da classe
      void displayMessage() {
         // Chama a funcao getCourseName para pegar no nome do curso
         cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
      } // Fim da funcao displayMessage

   private:
      string courseName; // Nome do curso para o GradeBook
}; // Fim da class GradeBook
