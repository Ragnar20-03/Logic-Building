// Which Accepts the marks and display the calss accordingly.
/*
0 to 34         Fail
35 to 49        Pass Class
50 to 59        Second class
60 to 74        First Class
75 to 100       Destinction
*/

#include <stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.00f))  //Filter
    {
        printf("Invalid Input \n");
        printf("Please Enter the marks in between range 0 to 100\n");

        return;
    }   

    if((fMarks<35.00f )&& (fMarks >= 0.0f))
    {
        printf("Fail !! \n");
    }
    else if((fMarks >= 35.00f ) && (fMarks < 50.00f) )
    {
        printf("Pass Class \n");
    }
    else if((fMarks >= 50.00f) && (fMarks < 60.00f) )
    {
        printf("Second Class\n");
    }
    else if((fMarks >= 60.00f) && (fMarks < 75.00f) )
    {
        printf("First Class \n");
    }
    else if((fMarks >= 75.00f) && (fMarks <= 100.00f) )
    {
        printf(" First Class With Destinction \n");
    }
    
}


int main(void)
{
    float fValue=0.0f;

    printf("Enter Your Marks :\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);
    return 0;
}