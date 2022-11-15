// Funcao: Escreva um programa que pede para o usuário inserir dois inteiros,
//         obtém os números do usuário, e então imprime o maior número seguido
//         pelas palavras “é o maior” . Se os números forem iguais, imprime a
//         mensagem “Estes números são iguais”

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int primeiroInteiro;
   int segundoInteiro;

   cout << "\nDigite o primeiro numero, <Enter> Digite o segundo inteiro <enter>: ";
   cin >> primeiroInteiro >> segundoInteiro;

   cout << "\n";

   if ( primeiroInteiro > segundoInteiro )
      cout << primeiroInteiro << " é o maior!" << endl;

   if ( primeiroInteiro < segundoInteiro )
      cout << segundoInteiro << " é o maior!" << endl;

   if ( primeiroInteiro == segundoInteiro )
      cout << "Estes números são iguais!" << endl;


   return 0;
}
