// exemplo001: main.cpp
// Repeticao controlada por contador
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   int counter; // Declara a variavel de controle

   counter = 1; // inicializa a variavel de controle

   while(counter <= 10) { // condicao de continuacao do loop
      cout << counter << " "; // Imprime o valor actual de counter
      counter++; // Adiciona mais 1 a counter
   } // Fim de while

   cout << endl; // Imprime o caracter de nova linha

   return 0; // Indica execucao bem sucedida

} // fim de main
