// Exemplo 07.1:: GradeBook.h
// Definicao de classe GradeBook apresenta a interfece public da classe.
// Definicoes de funcoes-membro aparecem em GradeBook.cpp.

#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>  // O programa utiliza a classe de string padrao c++
using std::string;

// Definicao da classe GradeBook
class GradeBook {
   public:
      GradeBook( string );            // Construtor que inicaliza um objecto GradeBook

      void setCourseName( string );   // Funcao que configura o nome do curso
      string getCourseName();         // Funcao que obtem o nome do curso
      void displayMessage();          // Funcao que exibe uma mensagem de boas vindas

      virtual ~GradeBook();           // Destrutor da classe

   private:
      string courseName;              // Nome do curso para esse GradeBook

}; // Fim da classe GradeBook
#endif // GRADEBOOK_H
