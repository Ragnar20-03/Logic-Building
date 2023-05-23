#include<stdio.h>
#include<stdbool.h>

//  Check Palindrome String..
//  Without Flag

bool chkPalindrome(char * str)
{
   char *start = NULL;
   char *end   = NULL;

   start = str;
   end = str;

    while(*end != '\0')
    {
        end ++;
    }
    end --;

    while (start < end)
    {
        if(*start != *end)
        {
            break;
        }
        start++;
        end--;
    }

    if(start < end)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    bool bRet = false;;

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    bRet = chkPalindrome(Arr);

    if(bRet == true)
    {
        printf("String is PalinDrome ..\n");
    }
    else
    {
        printf("String is Not PalinDrome ..\n");
    }

    return 0;
}
