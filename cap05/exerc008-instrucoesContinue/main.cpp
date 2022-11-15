// exemplo008-instrucoesContinue: main.cpp
// Programa que ilustra o usa da instrucoe continue
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   // itera 10 vezes
   for(int count = 1; count <= 10; count++) {

      // Verifica se count e igual a 5
      if (count == 5)
         continue; // Continua a executar o loop

      // exibe o valor de count
      cout << count << " ";
   }

   // Imprime sms e gera caracter de nova linha
   cout << "\nUsed continue to skip printing 5" << endl;

   return 0; // Indica execucao bem sucedida

} // Fim da funcao main
