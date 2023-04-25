//  Write A Program which Checks wheather number is even or Odd.

#include <stdio.h>
#include<stdbool.h> //for bool data type

// //////////////////////////////////
// Function name : CheckEvenOdd
// Input :          Integer
// Output :         Boolean
// Description :    Checks weather  input is even or odd
// Author : Roshan Prashant Patil
// Date :   25/4/2023
//
////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()  //Entry Point Function
{
    int iValue = 0;
    bool bRet = false;

    printf("Please Enter Number to Check Weather it is Even or Odd :\n");

    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue); //FunctionCall  

    if(bRet==true)
    {
        printf("%d is Even Number",iValue);
    }
    else
    {
        printf("%d is Odd  Number",iValue);
    }
    
    return 0;
}
