// Exemplo015: main.cpp
// Pre-incremente e pos-incremento
#include <iostream>

using namespace std;

int main()
{
   int c;

   // Demonstra pos-incremento
   c = 5; // atribui 5 a variavel c

   cout << c << endl;   // Imprime 5
   cout << c++ << endl; // Imprime 5 entao pos-incrementa
   cout << c <<  endl;  // Imprime 6

   cout << endl; // Pula uma linha

   // Demonstra pre-incremento
   c = 5; // Atribui 5 a variavel c
   cout << c << endl;   // Imprime 5
   cout << ++c << endl; // Pre-incrementa e entao imprime 6
   cout << c << endl;   // Imrpime 6

   return 0; // Indica que o programa terminou com sucesso

} // Fim de main
