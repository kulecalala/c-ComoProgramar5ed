// Exemplo004-jurosCompostos: main.cpp
// Calcula o juros de um capital investido num periodo de 10 anos
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
using std::left;
using std::right;

#include <iomanip>       // Biblioteca que permite formatar a saida dos dados
using std::setprecision; // Define a configura do numero de casas decimais
using std::setw;         // Permite que o programa configure a largura de um campo

#include <cmath> // Biblioteca de matematica c++ padrao
using std::pow;  // Permite ao programa calcular potencias

int main()
{
   float amount;              // Quantidade em deposito ao fim de cada ano
   float principal = 10000.00; // Quantidade principal em deposito principal
   float rate;                // Quantidade de juros a cada ano

   rate = 5.00 / 100.00;      // Calcula a quantidade dos juros a serem rendidos

   // Exibe um cabecalho
   cout << "Year" << setw(21) << "Amount on deposit" << endl;

   // Define a precisao de casas decimais
   cout << fixed << right << setprecision(2);

   // Define a variavel contadora de anos
   // Define o limite de anos
   // Acrescenta um ano
   for (int year = 1; year <= 10; year++) {
      // Calcula a quantidade de juros rendida por ano
      amount = principal * pow(1.0 + rate, year);

      // Exibe o ano e o saldo actual
      cout << setw(4) << year << setw(21) << amount << endl;
   } // Fim de for

   return 0; // Terminacao bem sucedida

} // Fim de main
