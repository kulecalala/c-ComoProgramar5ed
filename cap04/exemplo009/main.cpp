#include <iostream>

using namespace std;

int main()
{
   int gradeStudent = 50;

   if (gradeStudent >= 60)
      cout << "Passed!\n";
   else {
      cout << "Failed!\n";
      cout << "You must take this course again.\n";
   }

   return 0;
}
