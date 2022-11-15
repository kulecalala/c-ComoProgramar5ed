// Exemplo005ForcandoAConversao
// Funcao: Converte um caracter char no seu valor corresponde inteiro int.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   // Exibe 'a' e o seu valor correspondente inteiro na tabela ASCII
   cout << "The character ("<< 'a' <<") has the value " << static_cast< int >('a') << endl;

   return 0; // Indica terminacao bem sucedida

} // Fim de main
