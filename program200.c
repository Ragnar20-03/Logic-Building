#include<stdio.h>

//  Reverse the String

void strrevX(char * str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0');
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp =   *start;
        *start = *end;
        *end =   temp;

        start++;
        end--;
    }

}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    strrevX(Arr);

    printf("Reverse String is : %s\n",Arr);
    
    return 0;
}