#include <stdio.h>

void Display(int iNo)
{

    if(iNo<0)  //Updator
    {
        iNo= -iNo;
    }
   for (int iCnt=0; iCnt<iNo; iCnt++)
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