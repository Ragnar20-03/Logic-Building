#include<stdio.h>

// count of White Spaces in String...

int CountChar(char *str)
{
    int iCount = 0;
    while(*str !=  '\0'){

        if((*str ==  'z') )
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

    iRet = CountChar(Arr);    //CountChar(100)

    printf("Count of Z in String is  : %d \n",iRet);

    return 0;
}