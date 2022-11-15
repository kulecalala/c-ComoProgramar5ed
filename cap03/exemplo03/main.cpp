// Exemplo 03
// Funcao: Define a classe GradeBook que contem um membro de dados courseName
//         e funcoes-membro para configurar e obter o seu valor;
// Cria e maniplula um objecto GradeBook com essas funcoes.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>    // o programa utiliza a class string padrao C++
using std::string;
using std::getline;

// Define a classe GradeBook
class GradeBook {
   public:
      // Funcao que configura o nome do curso
      void setCourseName( string name ) {
         courseName = name; // Armazena o nome do curso non objecto
      } // Fim da funcao setCourseName

      // Funcao que obtem o nome do curso
      string getCourseName() {
         return courseName;
      } // Fim da funcao getCourseName

      // Funcao que exibe uma mensagem de boas vindas
      void displayMessage() {
         // Essa instrucao chama getCourseName para obter o
         // nome do curso que essa class reprenseta
         cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
      } // Fim da funcao displayMessage

   private:
      string courseName; // Nome do curso para esse GradeBook

}; // Fim da classe GradeBook

// A funcao main inicia a execucao do programa
int main()
{
   string nameOfCourse;   // Strings de caracteres para armazenar o nome do curso
   GradeBook myGradeBook; // Cria um objecto GradeBook chamado myGradeBook

   // Exibe o valor inicial de couseName
   cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

   // Solicita, insere e configura o nome do curso
   cout << "\nPlease enter the course name:" << endl;
   getline( cin, nameOfCourse ); // Le o nome de um curso com espacos em branco
   myGradeBook.setCourseName( nameOfCourse ); // Configura o nome do curso

   cout << endl; // Gera a saida de uma linha em branco
   myGradeBook.displayMessage(); // Exibe a mensagem com o novo nome do curso

   return 0; // Indica a execucao com sucesso

} // Fim de main
