// Funcao: Escreva um programa que imprime os números 1 a 4 na mesma linha com
//         cada par de números adjacentes separados por um espaço.
//         Faça isso de várias maneiras:
//
// a) Utilizando uma instrução com um operador de inserção de fluxo.
// b) Utilizando uma instrução com quatro operadores de inserção de fluxo.
// c) Utilizando quatro instruções.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

   cout << "\n\t 1 2 3 4";
   cout << "\n\t 1 " << "2 " << "3 " << "4"; //b

   cout << "\n\t 1";
   cout << " 2";
   cout << " 3";
   cout << " 4";
   cout << endl;

   return 0;
}
