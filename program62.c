#include<stdio.h>
#include<stdbool.h>


// Find the Even Digit Frequency
int CheckEvenDigit(int iNo)
{
    int iDigit=0;
    int iCnt =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
     iDigit = iNo % 10;
    
            if(iDigit % 2 !=0 )
            {
              iCnt++;
            }
    
     iNo = iNo /10;   
    }
    return iCnt;
    
}

int main()
{
    int iRet = 0;
    int iValue =0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet=CheckEvenDigit(iValue);
    printf("Total Odd Numbers Are %d",iRet);

    return 0;
}