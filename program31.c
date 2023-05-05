#include<stdio.h>
#include<stdbool.h>


// Without Flag 


bool CheckPrime(int iNo)
{
    int iCnt = 0;

    // Time Complexity of Below Loop
    // input -> 6 then time complexity = 1
    // input -> 11 then time complexity = n/2 i.e. Condition of ForLoop    i.e    11/2 = 5 ; 

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }
    if(iCnt == (iNo/2)+1)
    {
        return true ;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is not a prime number \n",iValue);
    }

    return 0;
}