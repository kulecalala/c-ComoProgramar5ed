/**
	Autor: Manuel Benedito
	 Tell: +244 929 037 378
 	Email: manuelbenedito2511@gmail.com
	 Data: 00/00/2022
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook( string name)
{
   //ctor
   setCourseName( name );
   studentMaximum = 0;
}

void GradeBook::setCourseName( string name ) {

   if ( name.length() <= 25 ) {

      courseName = name;
   } else {

      courseName = name.substr(0, 25);
      cout << "\n\tName \"" << name << "\" exceeds maximum length (25)."
           << "\n\tLimiting course name to first 25 characters.\n" << endl;
   }
}

string GradeBook::getCourseName() {

   return courseName;
}

void GradeBook::displayMessage() {

   cout << "\n\tWelcome to the grade book for\n\t" << getCourseName() << "!\n" << endl;
}

void GradeBook::inputGrades() {

   int grade1;
   int grade2;
   int grade3;

   cout << "\n\tInput three integer grades: ";
   cin >> grade1 >> grade2 >> grade3;

   studentMaximum = maximum(grade1, grade2, grade3);
}

int GradeBook::maximum(int x, int y, int z) {

   int maximumValue = x;

   if (y > maximumValue)
      maximumValue = y;

   if (z > maximumValue)
      maximumValue = z;

   return maximumValue;
}

void GradeBook::displayGradeReport() {

   cout << "\n\n\tMaximum of grades entered: " << studentMaximum << endl;
}

GradeBook::~GradeBook()
{
   //dtor
}
