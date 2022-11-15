// exerc5-8: main.cpp
/* Problema: Escreva um programa que utiliza uma instrução for para localizar o menor de vários inteiros.
             Assuma que o primeiro valor lido especifica o número de valores restantes e que o primeiro
             número não é um dos inteiros a ser comparado.*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{

   int qtdeInteiros;
   int menorInteiro;
   int numero;

   menorInteiro = 0;

   cin >> qtdeInteiros;

   for (int i = 1; i <= qtdeInteiros; i++) {

      cin >> numero;

      if (numero < menorInteiro) {
         menorInteiro = numero;
      }
   }

   cout << "\nO menor numero e: " << menorInteiro << endl;

   return 0;
}

