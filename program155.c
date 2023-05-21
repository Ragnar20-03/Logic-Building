#include<stdio.h>
#include<stdbool.h>


bool CheckSmall( char cValue )
{
    if((cValue >= 'a') && (cValue<='z'))
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

    bRet = CheckSmall(ch);

    if(bRet == true)
    {
        printf("%c is a Small case letter\n",ch);
    }
    else
    {
        printf("%c is Not a Small case letter\n",ch);

    }

    return 0;
}