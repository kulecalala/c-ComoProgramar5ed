// Funcao: Escreva um programa que insere um inteiro de cinco dígitos, separa o inteiro em seus
//         dígitos individuais e imprime os dígitos separados entre si por três espaços cada.
// [
//  Dica: Utilize operadores de divisão de inteiros e módulo.
// ]
// Por exemplo, se o usuário digitar 42339, o programa deve imprimir: 4 2 3 3 9
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int numero;
   int d1, d2, d3, d4, d5;

   cout << "\nInsira um numero de cinco (5) digitos: ";
   cin >> numero;

   d1 = numero / 1 % 10;
   d2 = numero / 10 % 10;
   d3 = numero / 100 % 10;
   d4 = numero / 1000 % 10;
   d5 = numero / 10000 % 10;

   cout << "\nO numero insirido foi o numero " << numero;
   cout << "\n\n\t O numero separado por digitos e: ";
   cout << "\n\nPrimeiro digito: " << d5;
   cout << "\n Segundo digito: " << d4;
   cout << "\nTerceiro digito: " << d3;
   cout << "\n  Quarto digito: " << d2;
   cout << "\n  Quinto digito: " << d1;

   cout << endl;

   return 0;
}

