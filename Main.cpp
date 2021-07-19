#include "Grade.h"

int main ( void )
{
    GradeBook myGradeBook1 ( "CCP - C++ Como Programar 5º edição" );
    GradeBook myGradeBook2 ( "teste" );

    myGradeBook1.displayMessage ( );
    myGradeBook2.displayMessage ( );

    return 0;
}
