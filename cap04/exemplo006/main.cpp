#include <iostream>

using namespace std;

int main()
{
   int studentGrade = 100;

   if (studentGrade >= 90) {         // 90 e acima obtem "A"
      cout << "A";
   } else if (studentGrade >= 80) {  // 80 e acima obtem "B"
      cout << "B";
   } else if (studentGrade >= 70) {  // 70 e acima obtem "C"
      cout << "C";
   } else if (studentGrade >= 60) {  // 60 e acima obtem "D"
      cout << "D";
   } else {                          // menor que 60 obtem "F"
      cout << "F";
   }

   return 0;
}
