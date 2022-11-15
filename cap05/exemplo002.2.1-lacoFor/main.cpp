// Exemplo002.2.1-lacoFor: main.cpp
// Exercicios com uso do laco for
// Exercicio: Altere a variável de controle de 1 a 100 em incrementos de 1.
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   // Declara e inicializa a variavei de controle,
   // Define a condicao de continuacao do loop
   // Incrementa a veriavel de controle em 1
   for(int i = 1; i <= 100; i++)
      cout << i << " "; // Exibe o valor actual da variavel de controle

   cout << endl; // Gera caracter de nova linha

   return 0; // Terminacao bem sucedida

} // Fim de main
