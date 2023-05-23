#include<stdio.h>
#include<stdbool.h>

//  Check Palindrome String..
//  With Flag

bool chkPalindrome(char * str)
{
   char *start = NULL;
   char *end   = NULL;
   bool bFlag = true;

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
            bFlag = false;
            break;
        }
        start++;
        end--;
    }
    return bFlag;
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
