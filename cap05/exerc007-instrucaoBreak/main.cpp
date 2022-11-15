// exemplo007-instrucaoBreak: main.cpp
// Programa para ilustracao da instrucao break.
#include <iostream>
using std::endl;
using std::cout;

int main()
{
   int counter; // Declara counter

   // Inicializa counter
   // Define a condicao de continuacao do loop
   // Acresce 1 a counter ao fim de cada loop
   for(counter = 1; counter <= 10; counter++) {

      // Verifica se counter e igual a 5
      if(counter == 5)
         break; // Sai do loop quando counter for 5

      cout << counter << " "; // Exibe o valor de counter
   } // Fim do loop

   // Exibe o ultimo valor de counter
   cout << "\nBreake out of loop at count = " << counter << endl;

   return 0; // Indica execucao bem sucedida

} // Fim de main
