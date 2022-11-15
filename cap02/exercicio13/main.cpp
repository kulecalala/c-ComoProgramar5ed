// Funcao: Escreva um programa que lê dois inteiros
//         e determina e imprime se o primeiro é um múltiplo do segundo.

// [
//  Dica: Utilize o operador módulo.
// ]
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int numero1;
   int numero2;

   cout << "\nDigite um valor: ";
   cin >> numero1;

   cout << "\nDigite outro valor: ";
   cin >> numero2;

   cout << "\n";

   if ( (numero1 % numero2) == 0 )
      cout << "O primeiro numero é multiplo do segundo!";

   cout << endl;

   return 0;
}
