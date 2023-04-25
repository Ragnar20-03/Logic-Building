#include "program5Header.h"

///////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1=0,iNo2=0,iAns=0;

    printf("Enter First Number\n");
    scanf("%d",&iNo1);

    printf("Enter Second Number\n");
    scanf("%d",&iNo2);

    iAns=Addition(iNo1,iNo2);
    printf("Addition is : %d\n",iAns);
    return 0;
}