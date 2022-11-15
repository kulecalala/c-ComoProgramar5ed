// Exemplo002.1-lacoFor: main.cpp
// Repeticao controlada por contador usando a loco for
#include <iostream>

using std::cout;
using std::endl;

int main()
{
   int x = 2;  // Declara e inicializa a variavel x com 2
   int y = 10; // Declara e inicializa o variavel y com 10

   // Declara a variavel de controle do loop,
   // define a condicao de continuacao do loop
   // Incremente em 1 a variavel de controle a cada loop
   for(int j = x; j <= 4 * x * y; j += y / y)
      cout << j << " "; // Imprime o valor de j na tela

   cout << endl; // Imprime um caracter de nova linha

   return 0; // Indica terminacao bem sucedida

} // Fim de main
