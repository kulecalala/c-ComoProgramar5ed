#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main()
{

   GradeBook obGradeBook("CS50 - Computer Science");

   obGradeBook.displayMessage();
   obGradeBook.inputGrades();
   obGradeBook.displayGradeReport();


   cout << endl;

   return 0;
}
