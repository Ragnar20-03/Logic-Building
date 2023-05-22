#include<stdio.h>


// Coppy Small letter in string into Another  

void strcpyX( char *src , char *dest)
{
    while (*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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

     strcpyX( Arr , Brr );

     printf("String After Editing Coppy is : %s\n",Brr);

    return 0;
}