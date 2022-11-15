// Exemplo012 - GradeBook.h
// Definição da classe GradeBook que determina a media de uma classe.
// As funcoes membro sao definidas como GradeBook.cpp
#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string> // O programa utiliza a classe de string padrao do C++

using namespace std;

// Definicao da classe GradeBook
class GradeBook
{
   public:
      GradeBook(string);             // O construtor inicializa o nome do curso

      void setCourseName(string);    // Funcao para configurar o nome do curso
      string getCourseName();        // Funcao para recuperar o nome do curso
      void displayMessage();         // Exibe uma mensagem de boas vindas
      void determineClassAverage();  // Calcula media das notas inseridas pelo usuario

      virtual ~GradeBook(); // o destrutor da classe

   private:
      string courseName; // Nome do curso para esse GradeBook

}; // Fim da definicao da classe GradeBook

#endif // GRADEBOOK_H
