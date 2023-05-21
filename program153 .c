#include<stdio.h>
#include<stdbool.h>


bool CheckCapital( char cValue )
{
    if((cValue >= 65) && (cValue<=90))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()

{
    char ch = '\0';
    bool bRet = false;

    printf("Enter Charater : \n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("%c is A capital letter\n",ch);
    }
    else
    {
        printf("%c is Not a capital letter\n",ch);

    }

    return 0;
}