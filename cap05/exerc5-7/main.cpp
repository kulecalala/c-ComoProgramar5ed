// exerc5-7: main.cpp
// Problema: O que é que faz o seguinte programa?
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int x;
   int y;

   cout << "\n\tEnter two integers in the range 1-20: ";
   cin >> x >> y;

   for (int i = 1; i <= y; i++) {

      for (int j = i; j <= x; j++) {
         cout << "@";
      }

      cout << endl;
   }

   return 0;
}
