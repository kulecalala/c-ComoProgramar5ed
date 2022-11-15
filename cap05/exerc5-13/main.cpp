// exerc5-13: main.cpp
/* Problema: Uma aplicação interessante dos computadores são os desenhos de gráficos e gráficos de barras.
             Escreva um programa que lê cinco números (cada um entre 1 e 30). Suponha que o usuário insira
             apenas valores válidos. Para cada número lido, seu programa deve imprimir uma linha contendo
             esse número de asteriscos adjacentes. Por exemplo, se seu programa lê o número 7, ele deve imprimir *******. */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int n1;
   int n2;
   int n3;
   int n4;
   int n5;

   cout << "\n\nInsira cinco valores no entre 1 e 30: ";
   cin >> n1 >> n2 >> n3 >> n4 >> n5;

   system("clear");

   cout << endl;

   for (int i = 1; i <= n1; i++) {
      cout << '*';
   }

   cout << endl;

   for (int i = 1; i <= n2; i++) {
      cout  << '*';
   }

   cout << endl;

   for (int i = 1; i <= n3; i++) {
      cout << '*';
   }

   cout << endl;

   for (int i = 1; i <= n4; i++) {
      cout << '*';
   }

   cout << endl;

   for (int i = 1; i <= n5; i++) {
      cout << '*';
   }

   return 0;
}
