// Funcao: Escreva um programa que solicita ao usuário inserir dois números,
//         obtém os dois números do usuário e imprime a soma, produto, diferença
//         e quociente dos dois números.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int numero1;
   int numero2;
   int soma;
   int produto;
   int diferenca;
   int quociente;

   cout << "\n\tPrimeiro numero: ";
   cin >> numero1;

   cout << "\tSegundo numero: ";
   cin >> numero2;

   soma       = numero1 + numero2;
   produto    = numero1 * numero2;
   diferenca  = numero1 - numero2;
   quociente  = numero1 / numero2;

   cout << "\n\tSoma: " << soma << "\n\tDiferenca: " << diferenca << endl;
   cout << "\n\tProduto: " << produto << "\n\tQuociente: " << quociente << endl;

   return 0;
}
