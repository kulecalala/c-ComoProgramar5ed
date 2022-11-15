/**
   funcao: Escreva um programa que imprime o número inteiro equivalente de um caractere digitado no teclado.
           Teste seu programa várias vezes utilizando letras maiúsculas, minúsculas, dígitos e caracteres especiais (como $ ).
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   char caracter;

   cout << "\nDigite um caracter qualquer: ";
   cin >> caracter;

   cout << "\nO caracter correspondente na tabela ASCII é: " << static_cast< int >( caracter );

   cout << endl;

   return 0;
}
