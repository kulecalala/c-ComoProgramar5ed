#include <iostream>

using namespace std;

int main()
{
   int studentGrade = 96;

   if (studentGrade >= 90)
      cout << "A";
   else
      if (studentGrade >= 80)
         cout << "B";
      else
         if (studentGrade >= 70)
            cout << "C";
         else
            if (studentGrade >= 60)
               cout << "D";
            else
               cout << "F";

   return 0;
}
