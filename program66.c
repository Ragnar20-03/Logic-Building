
#include<stdio.h>


//  Avarage of Digits in number..

float DigitsAvarage(int iNo)
{
    float fAvg = 0.0f;
    int iDigit =0;
    int iSum =0;
    int iCnt =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
        iCnt++;
    }

    fAvg = iSum / iCnt;

    // return fAvg;
    return (float)((float)iSum / (float)iCnt);  //

}


int main()
{
    int iValue=0;
    float fRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

     fRet= DigitsAvarage(iValue);

     printf("Avarage is %f",fRet);

    return 0;
}