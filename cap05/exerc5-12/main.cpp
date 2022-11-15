// exerc5-12: main.cpp
/* Problema: Escreva um programa que utiliza instruções for para imprimir os seguintes padrões separadamente,
             um embaixo do outro. Utilize loops for para gerar os padrões. Todos os asteriscos (*) devem ser
             impressos por uma única instrução na forma cout << ‘*’; (isso faz com que os asteriscos sejam
             impressos lado a lado). [Dica: Os últimos dois padrões requerem que cada linha inicie com um número apropriado
             de espaços em branco. Crédito extra: Combine seu código dos quatro problemas separados em um único
             programa que imprime todos os quatro padrões lado a lado usando inteligentemente os loops for aninhados.]*/
#include <iostream>
using std::cout;
using std::endl;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

int main()
{

   cout << "(a)" << endl;

   for (int i = 1; i <= 10; i++) {

      for (int j = 1; j <= i; j++) {

         cout << '*';
      } // Fim for

      cout << endl;
   } // Fim for

   cout << "\n(b)" << endl;

   for (int i = 1; i <= 10; i++) {

      for (int j = 10; j >= i; j--) {

         cout << '*';
      } // Fim for

      cout << endl;
   } // Fim for

   cout << "\n(c)" << endl;

   for (int i = 1; i <= 10; i++) {

      cout << setw(i);

      for(int j = 10; j >= i; j--) {

         cout << '*';
      } // Fim for

      cout << endl;
   } // Fim for

   cout << "\n(d)" << endl;

   for (int i = 1; i <= 10; i++) {

      cout << setw(11 - i);

      for (int j = 1; j <= i; j++) {

         cout << '*';
      } // Fim dor

      cout << endl;
   } // Fim for

   cout << "\n\n(Geral)\n\n";

   return 0;
}
