// exemplo005-contarComDoWhile: main.cpp
// Exemplo: Contar de 1 a dez usando a estrutura de repeticao do...while
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int counter = 1; // Declara e inicializa counter

   do {

      cout << counter << " "; // Exibe counter
      counter++;              // Acresce 1 a counter

   } while(counter <= 10); // Fim do..while

   cout << endl; // Gera saida de nova linha

   return 0; // Execucao bem sucedida

} // Fim de main
