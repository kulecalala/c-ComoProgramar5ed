// Exercicio003-SomandoInteirosPares: main.cpp
// Exercicion: Desenvolva um aplicativo que soma os inteiros pares de 2 a 20
#include <iostream>

using std::cout;
using std::endl;

int main()
{

   int total = 0; // Define e inicializa a variavel total com 0

   // Declara e inicializa a variavel contadora com 2
   // Define a condicao de continuacao do loop
   // Incrementa em 2 a variavel contadora
   for(int number = 2; number <= 20; number += 2)
      total += number; // Adiciona e atribui a soma de totoal e number a soma

   // Exibe o valor total
   cout << "\nTotal: " << total << endl;

   return 0; // Terminacao bem sucedida

} // Fim de main


