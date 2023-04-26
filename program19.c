#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        printf("Please Enter Valid input\n");
        return;
    }
    for (int iCnt=1;iNo <=5; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}  

int main(void)
{
    int iValue=0;
    printf("Enter the Frequency\n")
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}