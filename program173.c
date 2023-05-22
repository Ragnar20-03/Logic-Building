#include<stdio.h>

// Second Approach

int FirstOccurence( char *str , char cValue)
{
    int iCnt = 1;
    int iPos = 0;

    while (*str != '\0') && (*str != cValue)
    {
        str++;
        iCnt++;
    }

    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }

    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter the Character :\n");
    scanf(" %c",&ch);

    iRet = FirstOccurence( Arr , ch);

    printf("First ocuurence of that character is %d :\n",iRet);

    return 0;
}