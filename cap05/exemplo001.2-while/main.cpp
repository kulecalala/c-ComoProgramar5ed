// Exemplo001.2: main.cpp
// Repeticao controlada por contador melhorada
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   int counter = 0; // Declara e inicializa a variavel counter com 0

   while(++counter <= 10) // Condicao de continuacao do loop
      cout << counter << " "; // exibe o valor actual de counter na tela

   cout << endl; // Imprime uma nova linha na tela

   return 0; // Indica execucao bem sucedida

} // fim de main
