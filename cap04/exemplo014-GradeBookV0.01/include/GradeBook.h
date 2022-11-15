// Exemplo014: Gradebook.h
// Definicao da classe GradeBook que determina a media da classe.
// As funcoes-membro sao definidas em GradeBook.cpp
#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string> // O programa utiliza a classe de string padrao C++

using namespace std;

// Definicao da classe GradeBook
class GradeBook
{
   public:
      GradeBook(string); // O construtor incializa o nome do curso
      void setCourseName(string); // Funcao para configurar o nome do curso
      string getCourseName(); // Funcao para recuperar o nome do curso
      void displayMessage(); // Exibe uma mensagem de boas vindas
      void determineClassAverage(); // Calcula a media das notas inseridas pelo usuario

      virtual ~GradeBook(); // Destrutor da classe

   private:
      string courseName; // Nome de curso para esse GradeBook
}; // Fim da clesse GradeBook

#endif // GRADEBOOK_H
