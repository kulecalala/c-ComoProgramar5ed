#include <iostream>

using namespace std;

int main()
{
   int grade;
   int total;
   int counter;
   int average;

   total = 0;
   counter = 0;

   cout << "Insira a primeira nota ou (-1) para sair: ";
   cin >> grade;

   while (grade != -1) {
      system("clear");

      counter = counter + 1;
      total = total + grade;

      cout << "\nInsira a proxima nota ou (-1) para sair: ";
      cin >> grade;
   }

   if (counter != 0) {
      average = total / counter;

      cout << "\nO total das notas de todos os alunos e de: " << total << " valores!";
      cout << "\nA media da classe e de: " << average << " valores!";
   } else {
      cout << "\nNenhuma nota foi innserida!";
   }

   cout << endl;

   return 0;
}
