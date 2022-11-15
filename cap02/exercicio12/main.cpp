// Funcao: Escreva um programa que lê um inteiro e determina e imprime se ele é ímpar ou par.
// [
//  Dica: Utilize o operador módulo. Um número par é um múltiplo de dois. Qualquer múltiplo
//  de dois deixa um resto de zero quando dividido por 2.
// ]
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
   int numero;

   cout << "\nInsira um valor: ";
   cin >> numero;

   cout << "\n";

   if ( (numero % 2) == 0 )
      cout << numero << " é um  numero par!";

   if ( (numero % 2) != 0 )
      cout << numero << " é num numero impar!";

   cout << endl;

   return 0;
}
