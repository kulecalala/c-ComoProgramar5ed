// Calcula o produto de tres numeros
#include <iostream> // Permite ao programa realizar entrada e saida de dados

using std::cout;  // O programa utiliza cout
using std::cin;   // O programa utiliza cin
using std::endl;  // O programa utiliza endl

// A fancao main inicia a execucao do programa
int main ()
{
   int x;       // Primeiro inteiro a multiplicar
   int y;       // Segundo inteiro a multiplicar
   int z;       // Terceiro inteiro a multiplicar
   int result;  // resultado da multiplicacao

   cout << "Enter three interger: ";  // Solicita dados o usuario
   cin >> x >> y >> z;                // Le tres inteiros do usuario

   result = x * y * z;                // multiplica os tres inteiros; resultado do armazenamento

   cout << "The product is: " << result << endl; // Imprime o resultado; termina a linha

   return 0; // Indica que o programa foi executado com sucesso

} // Fim da funcao main
