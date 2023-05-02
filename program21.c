// Display the Factors Of the Number

#include <stdio.h>

void DisplayFactors(int iNo)
{
for (int i=1; i<=iNo; i++)
{
    if ((iNo % i) == 0)
    {
        printf("%d\n",i);
    }
}

}
int main()
{
    int iValue=0;
    printf("Enter a Number\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}