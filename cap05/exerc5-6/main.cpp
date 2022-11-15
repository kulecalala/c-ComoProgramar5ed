// Exerc5-6: main.cpp
/**Problema: Escreva um programa que utiliza uma instrução for para calcular e imprimir a média de vários inteiros.
//           Assuma que o último valor lido é o sentinela 9999. Uma típica seqüência de entrada talvez seja:
               10 8 11 7 9 9999
             que indica que o programa deve calcular a média de todos os valores que precedem 9999.*/
// Autor: Manuel Benedito
// Tell.: +244 929 037 378
// Email: manuelbenedito2511@gmail.com
// Data.: 02/11/2022
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int soma;
   int media;
   int numero;
   int counter;

   counter = soma = 0;

   for (int i = 1; i != 9999; counter++) {

      cin >> i;

      soma += i;
   }

   media = (soma - 9999) / (counter - 1);

   cout << "Media: " << media << endl;

   return 0;
}
