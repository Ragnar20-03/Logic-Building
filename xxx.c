#include<stdio.h>
#include<stdbool.h>

// Charater Check

bool CheckChar(char *str)
{
    bool bFlag = false
    while(*str !=  '\0'){

        if((*str ==  'z') )
        {
            bFlag = true;
            break;
        }

    }

    return iCount;
}

int main()
{
    char Arr[10];
    bool bRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    bRet = CheckChar(Arr);    //CheckChar(100)
    if(bRet == true)
    {
    printf("Z is Present");
    }
    else
    {
    printf("Z is not Present");

    }


    return 0;
}