#include <iostream>

using std::cout;
using std::endl;

int main()
{
   // Declara a inicializa a varivel total com 0
   int total = 0;

   for(int number = 2;   // Declara e inicializa a variavel contadora
       number <= 20;     // Define a codicao de continuacao do loop
       total += number,  // Adiciona total e number, e atribui o resultado a total
       number += 2)      // Incrementa em dois o variavel contadora
      ;                  // Corpo vazio

   // Exibe o valor de total
   cout << "\nTotal: " << total << endl;

   return 0; // Terminacao bem sucedida

} // Fim de main
