// Exemplo002.2.2-LacoFor: main.cpp
// Repeticao controlada por contador, decrementando o valor do contador
// Exemplo: Altere a variável de controle de 100 para baixo até 1 em
//          incrementos de -1 (isto é, decrementos de 1).
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   // Define e inicializa a variavel contadora com 100
   // Define a condicao de continuacao do loop
   // Decrementa a variavel contadora em 1
   for(int i = 100; i >= 1; i--)
      cout << i << " "; // Exibe o valor actual da variavel contadora

   cout << endl; // Gera caracter de nova linha

   return 0; // Terminacao bem sucedida

} // Fim de main
