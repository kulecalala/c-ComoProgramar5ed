// Exemplo002.2.5-lacoFor: main.cpp
// Repeticao controlada por contador, incrementa em 3 ate 20
// Exercicio: Altere a variável de controle sobre a seguinte
//            seqüência de valores: 2, 5, 8, 11, 14, 17, 20.
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   // declara e inicializa a variavel contadora em 2
   // Define a condicao de continuacao do loop
   // Incrementa em 3 a cada repeticao do loop
   for(int i = 2; i <= 20; i += 3)
      cout << i << " ";

   cout << endl; // Gera caracetr de nova linha

   return 0; // Terminacao bem sucedida

} // Fim de main
