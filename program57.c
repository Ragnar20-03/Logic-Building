#include<stdio.h>
#include<stdbool.h>


// Find Requested Digit in Number...
bool CountDigitFrequency(int iNo)
{
    int iDigit=0;
    int iCnt =0;

    while(iNo !=0)
    {
     iDigit = iNo % 10;
    
            if(iDigit == 8)
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

    iRet=CountDigitFrequency(iValue);
    printf("%d is Frequency",iRet);

    return 0;
}