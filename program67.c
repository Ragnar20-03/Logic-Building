//  Smallest Digits in Number;
#include<stdio.h>

int SmallDigit(int iNo)
{
    int iSno=9;
    int iDigit =0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit < iSno)
        {            
            iSno = iDigit;
        }
    }

    return iSno;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = SmallDigit(iValue);

    printf("%d is Smallest Digit \n",iRet);

    return 0;
}