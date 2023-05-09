#include<stdio.h>
#include<stdbool.h>

// Check Palidrome

bool CheckPalidrome(int iNo)
{
    int iDigit =0;
    int iReverse = 0;
    int tIno=0;

     tIno = iNo;

    while (tIno != 0)
    {
        iDigit = tIno % 10;
        iReverse = (iReverse * 10 )+ iDigit;
        tIno = tIno /10;
    }

    if (iReverse == iNo)
    {
        return true;
    }
    else{

        return false;
    }
    
}

int main()
{
    int iValue=0;
    bool bRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

     bRet= CheckPalidrome(iValue);

   if(bRet == true)
   {
    printf("number is Palidrome:\n");

   }
   else
   {

    printf("number is not Palidrome:\n");
   }
    return 0;
}