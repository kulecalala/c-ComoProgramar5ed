// Exemplo002-lacoFor: main.cpp
// Repeticao controlada por contador usando a instrucao for
#include <iostream>

using std::cout;
using std::endl;

int main()
{

   // Cabecalho da intrucao for, inclui inicializacao,
   // condicao de continuacao do loop e incremento
   for (int counter = 1; counter <= 10; counter++)
      cout << counter << " "; // Imprime o valor de counter na tela

   cout << endl; // Gera caracter de nova linha

   return 0; // Indica execucao bem sucedida

} // Fim de main
