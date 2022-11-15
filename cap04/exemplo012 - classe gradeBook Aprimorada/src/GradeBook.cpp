// Exemplo012: GradeBook.cpp
// Definicao de funcao membro para a classe GradeBook que resolve o
// problema de media da classe com repeticao controlada por contador
#include <iostream>

#include "GradeBook.h" // Inclui a definicao da classe GradeBook

using namespace std;

// Construtor inicializa courseName com string fornecida como argumento
GradeBook::GradeBook(string name)
{
   setCourseName(name); // Valida e armazena courseName
} // fim do contrutor GradeBook

// Funcao para configurar o nome do curso;
// Assegura que o nome do curso tenha no maximo 25 caracteres
void GradeBook::setCourseName(string name) {

   if (name.length() <= 25) {           // Se o nome tiver 25 ou menos caracteres

      courseName = name;                // Armazena o nome do curso no objecto

   } else { // Se o nome tiver mais de 25 caracteres

      courseName = name.substr(0, 25); // Seleciona os primeiros 25 carecteres

      cout << "Name \""<< name << "\" exceeds maximum length (25).\n"
           << "Limiting courseName to first 25 characters.\n" << endl;
   } // Fim do if...else

} // Fim da funcao setCourseName

// funcao para recuperar o nome do curso
string GradeBook::getCourseName() {
   return courseName;
} // Fim da funcao getCourseName

// Exibe uma mensagem de boas-vindas para o usuario de GradeNook
void GradeBook::displayMessage() {
   cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
} // Fim da funcao displayMessage

// Determina a media da classe com media nas 10 notas inseridas pelo usuario
void GradeBook::determineClassAverage() {

   int total;        // Soma das notas inseridas pelo usuario
   int gradeCounter; // Nome da nota a ser inserida a seguir
   int grade;        // Valor da nota inserida pelo usuario
   int average;      // Media das notas

   // Fase de incializacao
   total = 0;        // inicializa o total
   gradeCounter = 1; // inicializa o contador de loops

   // fase de processamento
   while (gradeCounter <= 10) { // Faz o loop 10 vezes

      cout << "Enter grade: "; // Solicita entrada
      cin >> grade; // insere a proxima nota

      total = total + grade; // Adiciona grade a total
      gradeCounter = gradeCounter + 1; // Incrementa o contador por 1

   } // Fim do while

   // fase de termino
   average = total / 10; // divisao de inteiros produz um resultado inteiro

   // Exibe o total e a media das notas
   cout << "\nTotal of all 10 grades is " << total << endl;
   cout << "\nClass average is " << average << endl;

} // Fim da funcao determineClassAverage

GradeBook::~GradeBook()
{
   //dtor
}
