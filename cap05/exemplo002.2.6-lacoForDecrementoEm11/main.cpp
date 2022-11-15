// Exemplo002.2.6lacoForDecrementoEm11: main.cpp
// Repeticao contralada por contador usando o laco for, decremento em 11
// Exercicio: Altere a variável de controle sobre a seguinte seqüência de
//            valores: 99, 88, 77, 66, 55, 44, 33, 22, 11, 0.
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   // Declara e inicializa a variavel contadora
   // Define a condicao de continuacao do loop
   // Descrementa em 11 a variavel contadora
   for(int i = 99; i >= 0; i -= 11)
      cout << i << " ";

   cout << endl; // Gera caracter de nova linha

   return 0; // Termininacao bem sucedida

} // Fim de main
