// Exemplo05
// Comparando inteiros utilizando instrucoes if, operadores relacionais
// e operadores de igualdade.
#include <iostream> // Permite ao programa realizar entrada e saida

using std::cout;  // O programa utiliza cout
using std::cin;   // O programa utiliza cin
using std::endl;  // O programa utiliza endl

// A funcao main inicia a execucao do programa
int main()
{
   int number1;  // Primeiro inteiro a comparar
   int number2;  // Segundo inteiro a comparar

   cout << "Enter to interger to compare: "; // Solicita dados ao usuario
   cin >> number1 >> number2;                // Le dois inteiros fornecidos pelo usuario


   if ( number1 == number2 )
      cout << number1 << " == " << number2 << endl;

   if ( number1 != number2 )
      cout << number1 << " != " << number2 << endl;

   if ( number1 < number2 )
      cout << number1 << " < " << number2 << endl;

   if ( number1 > number2 )
      cout << number1 << " > " << number2 << endl;

   if( number1 <= number2 )
      cout << number1 << " <= " << number2 << endl;

   if( number1 >= number2 )
      cout << number1 << " >= " << number2 << endl;

   return 0; // Indica que o orograma terminou com sucesso

} // Fim da funcao main


