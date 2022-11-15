// Exemplo014: GradeBook.cpp
// Definicao das funcoes-membro para a classe GradeBook que resolve o
// problema da media de clase com repeticao controlada por sentinela.
#include <iostream>
#include <iomanip> // Manipuladores de fluxo parametrizados

// Inclui a definicao da classe GradeBook de GradeBook.h
#include "GradeBook.h"

using namespace std;

// Construtor inicializa courseName com string fornecida como argumento
GradeBook::GradeBook(string name)
{
   setCourseName(name); // Valida e armazena courseName
} // Fim do construtor da classe

// Funcao para configurar o nome do curso
void GradeBook::setCourseName(string name) {

   if (name.length() <= 25) { // Se o nome do curso tiver menos de 25 caracteres

      courseName = name; // Armazena o nome do curso no objecto

   } else { // Se o nome tiver mais de 25 caracteres

      // Configura courseName com os primeiros 25 caracteres do nome de paramentro
      courseName = name.substr(0, 25); // Seleciona os primeiros 25 caracteres

      cout << "Name \""<< name << "\" exeeds maximum length (25).\n"
           << "Limiting courseName to first 25 characters.\n" << endl;
   } // fim do if...else

} // fim da funcao setCourseName

// Funcao para recuperar o nome do curso
string GradeBook::getCourseName() {
   return courseName;
} // fim da funcao getCourseName

// Exibe uma mensagem de boas-vidas para o usuario de GradeBook
void GradeBook::displayMessage() {
   cout << "Welcome to grade book for " << getCourseName() << "!\n" << endl;
} // Fim de displayMessage

// Determina a media da classe com base nas notas inseridas pelo usuario
void GradeBook::determineClassAverage() {

   int total;        // Soma das notas inseridas pelo usuario
   int gradeCounter; // Numero de notas inseridas
   int grade;        // Valor da nota
   double average;   // Numero com ponto de fracao decimal para a media

   // fase de inicializacao
   total = 0;        // Inicializa total
   gradeCounter = 0; // Inicializa o contador de loops

   // Fase de processamento
   // Solicita entrada e le a nota do usuario
   cout << "Enter grade or -1 to quit: ";
   cin >> grade; // Inseri a nota ou valor sentinela

   // faz um loop ate ler um valor sentinela inserido pelo usuario
   while (grade != -1) { // Enquanto a nota nao e -1

      total = total + grade;            // Adiciona grade a total
      gradeCounter = gradeCounter + 1;  // Incrementa o contador

      // Solicita entrada e le a proxima nota fornecida pelo usuario
      cout << "Enter grade or -1 to quit: ";
      cin >> grade; // Inseri nota ou valor sentinela

   } // Fim do while

   // fase de termino
   if (gradeCounter != 0) { // Se o usuario inserio pelomenos uma nota...

      // Calcula a media de todas as notas inseridas
      average = static_cast< double >(total) / gradeCounter;

      // Exibe o tatoal e a media (com 2 digitos de precisao)
      cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
      cout << "\nClass average is " << setprecision( 2 ) << fixed << average << endl;
   } else {
      // Nenhuma nota foi inserida, assim gera a saida de mensagem apropriada
      cout << "No grade were entered!" << endl;
   } // fim do if...else

} // Fim da funcao determineClassAverage

// Destrutor da class
GradeBook::~GradeBook()
{
   //dtor
}
