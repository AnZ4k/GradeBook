#include <iostream>
using std::cout;
using std::endl;

#include "Grade.h"

GradeBook::GradeBook ( string name )
{
    setCourseName ( name );
}

void GradeBook::setCourseName ( string name )
{
    if ( name.length ( ) <= 25 )
    {
        courseName = name;
    }
    else
    {
        courseName = name.substr ( 0, 25 );
        cout << "Name \"" << name << "\" Exceeds maximum length (25). \n"
             << "Limiting course name to first 25 characters.\n" << endl;
    }
    
}

string GradeBook::getCourseName ( void )
{
    return courseName;
}

void GradeBook::displayMessage ( void )
{
    cout << "Welcome to " << getCourseName ( ) << " grade book!!" << endl;
}
