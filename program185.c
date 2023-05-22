#include<stdio.h>


// Coppy Capital letter in string into Another  

void strcpyCap( char *src , char *dest)
{
    while (*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {

        *dest = *src;
         dest++;
        }

         src++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

     strcpyCap( Arr , Brr );

     printf("String After Editing Coppy is : %s\n",Brr);

    return 0;
}