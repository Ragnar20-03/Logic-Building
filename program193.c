#include<stdio.h>


// Coppy string into Another  by specific Number

void strncpyX( char *src , char *dest , int iLength)
{
    while ((*src != '\0') && (iLength != 0) )
    {
        *dest = *src;

         src++;
         dest++;

         iLength --;
    }

    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);
    printf("Enter number of Letters that you want to Coppy\n");
    scanf("%d",&iNo);

     strncpyX( Arr , Brr , iNo);

     printf("String After Editing Coppy is : %s\n",Brr);

    return 0;
}