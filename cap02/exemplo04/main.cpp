// Exemplo 04
// Programa de adicao que exibe a soma de dois numeros

#include <iostream> // Permite ao programa realizar entrada e saida de dados

// A funcao main inicia a execucao do programa
int main()
{
   // Declaracoes de variaveis
   int number1; // primeiro inteiro a adicionar
   int number2; // Segundo inteiro a adicionar
   int sum;     // Soma de number1 e number2

   std::cout << "Enter first interger: "; // Solicita dados ao usuario
   std::cin >> number1;                   // Le o primeiro inteiro inserido pelo usuario em number1

   std::cout << "Enter second interger: "; // Solicita dados ao usuario
   std::cin >> number2;                    // Le segundo inteiro inserido pelo usuario em number2

   sum = number1 + number2;                // Adiciona os numeros; armazena o resultado em sum

   std::cout << "Sum is " << sum << std::endl; // Exibe sum; termina a linha

   return 0; // Indica que o progroma terminou com sucesso

} // Fim da funcao main
