// Funcao: Escreva um programa que lê cinco inteiros
//         e determina e imprime o maior e o menor inteiro no grupo.
//         Utilize somente as técnicas de programação que você aprendeu neste capítulo

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int i1, i2, i3, i4, i5;

   int maior;
   int menor;

   cout << "\nPrimeiro valor: ";
   cin >> i1;

   cout << "\nSegundo valor: ";
   cin >> i2;

   cout << "\nTerceiro valor: ";
   cin >> i3;

   cout << "\nQuarto valor: ";
   cin >> i4;

   cout << "\nQuinto valor: ";
   cin >> i5;

   // As seguintes instrucoes verificam o maior valor
   if ( (i1 > i2) && (i1 > i3) && (i1 > i4) && (i1 > i5) )
      maior = i1;

   if ( (i2 > i1) && (i2 > i3) && (i2 > i4) && (i2 > i5) )
      maior = i2;

   if ( (i3 > i1) && (i3 > i2) && (i3 > i4) && (i3 > i5) )
      maior = i3;

   if ( (i4 > i1) && (i4 > i2) && (i4 > i3) && (i4 > i5) )
      maior = i4;

   if ( (i5 > i1) && (i5 > i2) && (i5 > i3) && (i5 > i4) )
      maior = i5;

   // As seguintes instrucoes verificam o menor valor
   if ( (i1 < i2) && (i1 < i3) && (i1 < i4) && (i1 < i5) )
      menor = i1;

   if ( (i2 < i1) && (i2 < i3) && (i2 < i4) && (i2 < i5) )
      menor = i2;

   if ( (i3 < i1) && (i3 < i2) && (i3 < i4) && (i3 < i5) )
      menor = i3;

   if ( (i4 < i1) && (i4 < i2) && (i4 < i3) && (i4 < i5) )
      menor = i4;

   if ( (i5 < i1) && (i5 < i2) && (i5 < i3) && (i5 < i4) )
      menor = i5;


   // Saidas
   cout << "\nMenor: " << menor << "\nMaior: " << maior << endl;

   return 0;
}
