// exerc5-9: main.cpp
/* Problema: Escreva um programa que utiliza uma instrução for para calcular
             e imprimir o produto dos inteiros ímpares de 1 a 15.*/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int produto;

   produto = 1;

   for (int i = 1; i <= 15; i += 2) {

      produto *= i;

      cout << produto << endl;
   }

   return 0;
}
