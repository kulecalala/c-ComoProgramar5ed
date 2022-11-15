// Exemplo 01
// Funcao: Define a class GradeBook com uma funcao membro displayMessage;
//         Cria um objecto GradeBook e chama sua funcao membro displayMessage.
#include <iostream>

using std::cout;
using std::endl;

// Define a classe GradeBook
class GradeBook {

   public:
      // Funcao que exibe uma mensagem de boas-vindas ao usuario do GradeBook
      void displayMessage() {
         cout << "Welcome to the Grade Book!" << endl;
      } // Fim da funcao displayMessage

}; // fim da classe GradeBook

// A funcao main inicia a execucao do programa
int main()
{
   GradeBook myGradeBook;        // Cria um objecto GradeBook chamado myGradeBook

   myGradeBook.displayMessage(); // Chama a funcao displayMessage do objecto

   return 0; // Indica execução com sucesso

} // fim da funcao main
