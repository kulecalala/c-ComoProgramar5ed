// Funcao: Escreva um programa que insere três inteiros a partir do teclado e
//         imprime a soma, a média, o produto, o menor e o maior desses números.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int primeiroValor;
   int segundoValor;
   int terceiroValor;

   int soma;
   int media;
   int produto;
   int menor;
   int maior;

   cout << "\nEntre com três valores inteiros: ";
   cin >> primeiroValor >> segundoValor >> terceiroValor;

   // Atribuicoes
   soma    = primeiroValor + segundoValor + terceiroValor;
   media   = (0.2 * primeiroValor) + (0.3 * segundoValor) + (0.5 * terceiroValor);
   produto = primeiroValor * segundoValor * terceiroValor;

   // Verifica qual o maior valor
   if ( (primeiroValor > segundoValor) && (primeiroValor > terceiroValor) )
      maior = primeiroValor;

   if ( (segundoValor > primeiroValor) && (segundoValor > terceiroValor) )
      maior = segundoValor;

   if ( (terceiroValor > primeiroValor) && (terceiroValor > segundoValor) )
      maior = terceiroValor;

   // Verifica qual o menor valor
   if ( (primeiroValor < segundoValor) && (primeiroValor < terceiroValor) )
      menor = primeiroValor;

   if ( (segundoValor < primeiroValor)  && (segundoValor < terceiroValor) )
      menor = segundoValor;

   if ( (terceiroValor < primeiroValor) && (terceiroValor < segundoValor) )
      menor = terceiroValor;

   // Saidas
   cout << "\nSaidas: " << soma << "\nMedia: " << media << "\nProduto: " << produto;
   cout << "\nMenor: " << menor << "\nMaior: " << maior;

   cout << endl;

   return 0;
}
