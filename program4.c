
/*
    Algorithm:

    START
        Accept First Number As N01
        Accept Second Number As N02
        Create One Variable s Ans
        Perform Addition of No1 and No2
        Store The Addition into variable Ans
        Display The value Of ans
    STOP
*/

///////////////////////////////////////////////////////
//
// Write A Program Which Performs addition of Two Numbers
//
///////////////////////////////////////////////////////

#include <stdio.h>

unsigned int Addition(unsigned int iValue1, unsigned int iValue2 )
{
    unsigned int iResult=0;
    iResult=iValue1+iValue2;
    return iResult;
}
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