//  Smallest Digits in Number;
#include<stdio.h>

int MaximumDigit(int iNo)
{
    int iMax=0;
    int iDigit =0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit > iMax)
        {            
            iMax = iDigit;
        }
        if(iMax == 9)
        {
            break;
        }
    }

    return iMax;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MaximumDigit(iValue);

    printf("%d is Largest Digit \n",iRet);

    return 0;
}