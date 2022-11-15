// Exemplo002.2.3lacoForIncrementoDe7
// Repeticao controlada por contador, incremento de 7 a 77
// Exemplo: Altere a variável de controle de 7 a 77 em passos de 7.
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   // Declara e inicializa a variavel contadora com 7
   // Define a condicao de continuacao do loop
   // Incrimenta a variavel contadora
   for(int i = 7; i <= 77; i += 7)
      cout << i << " ";

   cout << endl; // Gera caracter de nova linha

   return 0; // Terminacao bem sucedida

} // Fim de main
