#include <iostream>

using namespace std;

int main()
{
   int contador = 1;
   int total = 0;
   int nota = 0;
   int media = 0;

   while (contador <= 10) {
      cout << "\n Insira a " << contador << "º nota: ";
      cin >> nota;

      total += nota;
      contador++;
   }

   media = total / 10;

   cout << "\n O total das nota é de " << total;
   cout << "\n A média é de " << media;

   cout << endl;


   return 0;
}
