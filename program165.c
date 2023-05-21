#include<stdio.h>

// Count Vovels in a String.. 

int strlenVovels(char *str)
{
    int iCount = 0;
    while(*str !=  '\0'){

        if ( (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U')) 
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

    iRet = strlenVovels(Arr);    //strlenVovels(100)

    printf("Count of Vovel in a String is  : %d \n",iRet);

    return 0;
}