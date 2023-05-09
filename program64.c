#include<stdio.h>

// Without Updator

int ReverseNumber(int iNo)
{
    int iDigit =0;
    int iReverse = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10 )+ iDigit;
        iNo = iNo /10;
    }

    return iReverse;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

     iRet= ReverseNumber(iValue);

    printf("Reverse Number is %d \n ",iRet);
    return 0;
}