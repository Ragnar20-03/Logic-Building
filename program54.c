#include<stdio.h>
#include<stdbool.h>


// Find Requested Digit in Number...
bool CheckDigits(int iNo)
{
    int iDigit=0;
    bool bRet = false;

    while(iNo !=0)
    {
     iDigit = iNo % 10;
    
            if(iDigit == 8)
            {
                break;
            }
    
     iNo = iNo /10;   
    }
    printf("%d\n",iNo);
    return true;
    
}

int main()
{
    bool bRet = false;
    int iValue =0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    bRet=CheckDigits(iValue);

    if(bRet == true)
    {
        printf("Digit preset in Number\n");
    }
    else
    {
        printf("Digit is Not preset in Number\n");
    }


    return 0;
}