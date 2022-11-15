// exerc5-11: main.cpp
/* Problema: Modifique o programa de juros compostos da Seção 5.4 para repetir seus passos para
             as taxas de juros de 5%, 6%, 7%, 8%, 9% e 10%. Utilize uma instrução for para variar a taxa de juros.*/
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

#include <math.h>
using std::pow;

int main()
{
   double amount;
   double principal = 100000.0;
   double rate = .05;

   cout << "\n\n\tYear" << setw(10) << "Rate" << setw(21) << "Amount on deposit" << endl;

   cout << fixed << setprecision(2);

   for (int year = 1; year <= 10; year++) {

      amount = principal * pow(1.0 + rate, year);

      if (year > 5) {
         rate = year / 100.00;
      }

      cout << "\t" << setw(4) << year
           << setw(10) << rate << "%"
           << setw(21) << amount;
           << endl;
   }


   return 0;
}
