// O problema do else oscilante
#include <iostream>

using namespace std;

int main()
{
   int x;
   int y;

   x = y = 5;
   /*
      Para solucionar o problema do if oscilante devemos colocar
      cada bloco de construcao dentro de { e } corresponte.

      No exemplo008, podemos encontrar um exemplo que soluciona este problema!
   */
   if (x > 5)
      if (y > 5)
         cout << "x and y > 5!" << endl;
   else
      cout << "x is <= 5" << endl;

   return 0;
}
