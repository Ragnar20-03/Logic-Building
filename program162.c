#include<stdio.h>

// Length of Small letters in a String....

int strlenSmall(char *str)
{
    int iCount = 0;
    while(*str !=  '\0'){

        if((*str >= 'a') && (*str <= 'z') )
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

    iRet = strlenSmall(Arr);    //strlenSmall(100)

    printf("Length of Small Letters string is : %d \n",iRet);

    return 0;
}