#include<stdio.h>

// count of White Spaces in String...

int strlenSpace(char *str)
{
    int iCount = 0;
    while(*str !=  '\0'){

        if((*str ==  ' ') )
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

    iRet = strlenSpace(Arr);    //strlenSpace(100)

    printf("Count of WhiteSpaces is  : %d \n",iRet);

    return 0;
}