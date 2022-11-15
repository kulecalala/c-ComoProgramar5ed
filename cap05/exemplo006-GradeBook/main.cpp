#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "GradeBook.h"

int main()
{
   GradeBook myGradeBook1("CS101 Introduction To C++ Programming");

   myGradeBook1.displayMessage();
   myGradeBook1.inputGrades();
   myGradeBook1.displayGradeReport();

   return 0;
}
