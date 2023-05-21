#include<stdio.h>
#include<stdlib.h>

// Taking input from user for operation..
// 2nd Solution  of program 168.c


int CountChar(char *str , char cValue)
{
    int iCount = 0;
    while(*str !=  '\0'){

        if((*str ==  cValue) )
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    fflush(stdin);

    printf("Enter the character : \n");
    scanf(" %c",&ch);

    iRet = CountChar(Arr , ch );    //CountChar(100 , ch)

    printf("Count of of occurances are  : %d \n",iRet);

    return 0;
}