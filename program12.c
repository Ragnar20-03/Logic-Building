#include <stdio.h>

void Display(int iValue)
{
   for (int iCnt=0; iCnt<iValue; iCnt++)
   {
        printf("HP...\n");
   }
}

int main(void)
{
    int iValue=0;
    printf("Enter how many times you want to display\n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}