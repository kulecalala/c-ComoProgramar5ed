// Exemplo 06
// Definicao da Classe GradeBook. Esse arquivo apresenta a interface publica de
// GradeBook sem revelar as implementacoes de funcao-membro de GradeBook
// que sao definidas em GradeBook.cpp.
#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string> // A classe GradeBook utiliza a classe string padrao C++
using std::string;

// Definicao da classe GradeBook
class GradeBook
{
   public:
      GradeBook( string );           // Construtor que incializa courseName
      void setCourseName( string );  // Define o nome do curso do objecto
      string getCourseName();        // Pega o nome do curso
      void displayMessage();         // Exibe uma mensagem de boas vindas com o nome do curso

      ~GradeBook();

   private:
      string courseName;  // Armazena o nome do curso
};

#endif // GRADEBOOK_H
