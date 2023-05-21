#include<stdio.h>

// Length of SmaCapitalll letters in a String....

int strlenCapital(char *str)
{
    int iCount = 0;
    while(*str !=  '\0'){

        if((*str >= 'A') && (*str <= 'Z') )
        {
            iCount++;
        }
            str++;

    }

    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    iRet = strlenCapital(Arr);    //strlenCapital(100)

    printf("Length of Capital Letters string is : %d \n",iRet);

    return 0;
}