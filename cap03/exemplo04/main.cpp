// Exemplo 04
// Funcao: Instanciando multiplos objectos da classe GradeBook e utilizando
//         e utilizando o GradeBook para especificar o nome do curso
//         quando cada objecto GradeBook e criado
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string> // O programa utiliza a classe de string padrao c++
using std::string;

// Define a classe GradeBook
class GradeBook {
   public:
      // O construtor inicializa courseName com a string fornecida como argumento
      GradeBook( string name ) {
         setCourseName( name ); // Chama a funcao set para inicializar courseName
      } // Fim do construtor GradeBook

      // Funcao para configurar o nome do curso
      void setCourseName( string name ) {
         courseName = name; // Armazena o nome do curso no objecto
      } // Fim da funcao setCourseName

      // Funcao para obter o nome do curso
      string getCourseName() {
         return courseName; // Retorna corseName do objecto
      } // Fim da funcao getCourseName

      // Exibe uma mensasagem de boas-vindas para usuarios GradeBook
      void displayMessage() {
         // Chama getCourseName para obter courseName
         cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
      } // Fim da funcao displayMessage

   private:
      string courseName; // Nome do curso para esse GradeBook
}; // Fim da classe GradeBook

// A funcao main inicia a execucao do programa
int main()
{
   // Cria dois objectos GradeBook
   GradeBook myGradeBook1( "CS101 Introdution to c++ programming" );
   GradeBook myGradeBook2( "CS102 Data Structure in C++" );

   // Exive o valor inicial de courseName para cada GradeBook
   cout << "gradebook1 created for course: " << myGradeBook1.getCourseName()
        << "\ngradebook2 created for course: " << myGradeBook2.getCourseName()
        << endl;

   return 0; // Indica execucao bem-sucedida

} // Fim de main
