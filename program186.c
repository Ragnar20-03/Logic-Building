#include<stdio.h>


// Coppy Capital letter in string into Another  

void strcpyToggleX( char *src , char *dest)
{
    while (*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
         src++;
         dest++;
    }
        *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

     strcpyToggleX( Arr , Brr );

     printf("String After Editing Coppy is : %s\n",Brr);

    return 0;
}