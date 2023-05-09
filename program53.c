#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit=0;
    for (; iNo !=0; iNo = iNo /10;  )
    {
     iDigit = iNo % 10;
     printf("%d\n", iDigit);
       
    }
}

int main()
{
    int iValue =0;
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}