// Write a program which checks weather the number is divisable by 3 and 5

#include <stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
        if( ( ( iNo % 3 ) == 0 )  && ( ( iNo % 5 ) == 0) )
        {
            return true;
        }
        else
        {
            return false;
        }
}

int main(void)
{
  unsigned  int iValue=0;
    bool bRet=false;
    printf("Enter a Number \n");
    scanf("%d",&iValue);

    bRet=CheckDivisible(iValue);
    if(bRet==true)
    {
        printf("%d is Completely divisible by 5 And 3 ",iValue);
    }
    else
    {

        printf("%d is not Completely divisible by 5 And 3 ",iValue);
    }

    return 0;
}