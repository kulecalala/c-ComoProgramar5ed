// Exemplo014: Analysis.cpp
// Definicoes de funcao-membro para a classe Analysis que
// analisa os resultados do teste.
#include <iostream>

// Inclui a definicao de classe Analysis a partir de Analysis.h
#include "Analysis.h"

using namespace std;

// processa os resultados do teste de 10 alaunos
void Analysis::processExamResults() {

   // Inicializando variaveis nas declaracoes
   int passes = 0;         // Numero de aprovacoes
   int failures = 0;       // Numero de reprovacoes
   int studentCounter = 1; // Contador de alunos
   int result;             // O resultado de um teste (1 = aprovado, 2 = reprovado)

   // Processa 10 alunos utilizando o loop controlado por contador
   while (studentCounter <= 10) {

      // Solicita ao usuario uma entrada e obtem valor fornecido pelo usuario
      cout << "Enter result (1 = Pass, 2 = Fail): ";
      cin >> result; // le o resultado

      // if..else anainhado em while
      if (result == 1)             // Se resultado for 1
         passes = passes + 1;      // Incrementa aprovacoes
      else                         // Senao resultado nao for 1, entao
         failures = failures + 1;  // incrementa reprovacoes

      // Incrementa studentCounter ate o loop terminar
      studentCounter = studentCounter + 1;
   } // fim do while

   // Fase de terminacao; exibe o numero de aprovados e reprovados
   cout << "Passed " << passes << "\nFailed " << failures << endl;

   // Determina se mais de 8 alunos passaram
   if (passes > 8)
      cout << "Raise tuition" << endl;

} // Fim da funcao processExamResults
