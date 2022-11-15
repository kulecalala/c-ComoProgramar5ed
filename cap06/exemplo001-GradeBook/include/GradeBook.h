#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using std::string;

class GradeBook
{
   public:
      GradeBook( string );

      void setCourseName( string );
      string getCourseName();
      void displayMessage();
      void inputGrades();
      void displayGradeReport();
      int maximum(int, int, int);

      virtual ~GradeBook();

   private:
      string courseName;
      int studentMaximum;
};

#endif // GRADEBOOK_H
