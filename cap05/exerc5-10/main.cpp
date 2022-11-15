// exerc5-10: main.cpp
/* Problema: A função fatorial é freqüentemente utilizada em problemas de probabilidade.
             Utilizando a definição de fatorial no Exercício 4.35, escreva um programa que
             utiliza uma instrução for para avaliar o fatorial dos inteiros de 1 a 5.
             Imprima os resultados no formato de tabela.
             Que dificuldade poderia impedir você de calcular o fatorial de 20? */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

int main()
{
   int n = 20;
   double factorial;

   factorial = n;

   cout << fixed << setprecision(0);

   for (int i = 1; i < n; i++) {

      cout << factorial;

      factorial *= (n - i);

      if (i % 2) {
         cout << setw(35);
      } else {
         cout << endl;
      }
   }

   cout << "\n\n\tFactorial: " << factorial << endl;

   return 0;
}
