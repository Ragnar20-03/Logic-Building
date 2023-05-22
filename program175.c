#include<stdio.h>



void Display( char *str )
{
    int iSmall = 0;
    int iCapital = 0;

    while (*str != '\0')
    {
       if (((*str >= 'a') && (*str <= 'z')))
       {
        iSmall++;
       }
       else if (((*str >= 'A') && (*str <= 'Z')))
       {
        iCapital++;
       }
       str++;
    }
    printf ("Small Letters = %d\n",iSmall);
    printf ("Capital Letters = %d\n",iCapital);
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

     Display( Arr );

    return 0;
}