// exemplo009-operadoreLogicos: main.cpp
// Funcao: Imprime a tabela verdade dos operadores logicos
//         AND, OR and NOT
// Autor: Manuel Benedito
// Email: manuelbeneditp2511@gmail.com
// Data.: 12/10/2022
#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha; // Usa a funcao nao parametrizada boolalpha
                      // que faz com os valores booleanos sejam impressos como
                      // true e false


#include <iomanip>
using std::setw;

int main()
{
   // Tabela verdade do END (&&)
   cout << boolalpha << "======> Logical END (&&) "
        << "\n\n" << setw(20) << "false && false = " << (false && false)
        << "\n" << setw(20) << "false && true = " << (false && true)
        << "\n" << setw(20) << "true && false = " << (true && false)
        << "\n" << setw(20) << "true && true = " << (true && true) << "\n\n";

   // Tabela verdade do OR (||)
   cout << "======> Logical OU (||)"
        << "\n\n" << setw(20) << "false || false = " << (false || false)
        << "\n" << setw(20) << "false || true = " << (false || true)
        << "\n" << setw(20) << "true || false = " << (true || false)
        << "\n" << setw(20) << "true || true = " << (true || true) << "\n\n";

   // Tabela verdade do NOT (!)
   cout << "======> Logical NOT (!)"
        << "\n\n" << setw(20) << "!false = " << !false
        << "\n" << setw(20) << "!true = " << !true << endl;

   return 0; // Indica execucao bem sucedida

} // Fim de main
