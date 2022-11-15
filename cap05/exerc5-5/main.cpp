// exerc5-5: main.cpp
/* Problema: Escreva um programa que utiliza uma instrução for para somar uma seqüência de inteiros.
             Assuma que o primeiro inteiro lido especifica o número de valores que restam a ser inseridos.
            Seu programa deve ler somente um valor por instrução de entrada. Uma típica seqüência
            de entrada talvez seja: 5 100 200 300 400 500
            onde o 5 indica que os valores 5 subseqüentes devem ser somados.*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int numero;
   int soma;
   int qtde;

   soma = 0;

   cin >> qtde;

   for (int i = 1; i <= qtde; i++) {

      cin >> numero;

      soma += numero;
   }

   cout << "soma: " << soma << endl;

   return 0;
}

