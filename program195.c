#include<stdio.h>


// Check strings are equal or not

void strcmpx( char *str1 , char *str2 )
{
    while ((*src != '\0') && (str2 != 0) && (*str1 != str2) )
    {
        str1++;
        str2++;
    }

    if ((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter Second String : \n");
    scanf(" %[^'\n']s" , Arr);

    bRet =  strcmpx( Arr , Brr  );

    if(bRet == true)
    {
        printf("Strings Are equal : \n");
    }
    else
    {
        printf("Strings Are Not  equal : \n");

    }

    
    return 0;
}