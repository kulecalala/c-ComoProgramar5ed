// Solucionando o problema do else oscilante
#include <iostream>

using namespace std;

int main()
{
   int x;
   int y;

   x = y = 5;

   if (x > 5) {
      if (y > 5)
         cout << "x and y are > 5!";
   } else
      cout << "x is <= 5";

   cout << endl;

   return 0;
}
