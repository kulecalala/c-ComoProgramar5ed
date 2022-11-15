// Exemplo002.2.4-lacoFor: main.cpp
// Repeticao controlada por contador usando o laco for, decremento em -2
// exercicio: Altere a variável de controle de 20 para baixo até 2 em passos de -2.
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   // Declara e inicializa a variavel contadora
   // Condicao de continuacao do loop
   // Decrementa a variavel contadora e -2
   for(int i = 20; i >= 2; i -=2)
      cout << i << " ";

   cout << endl; // Gera caracter de nova linha

   return 0; // Terminacao bem sucedida

} // Fim de main
