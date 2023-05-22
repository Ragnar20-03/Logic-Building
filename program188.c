#include<stdio.h>


// Coppy Reverse  string into Another  

void strcpyReverse( char *src , char *dest)
{
    int iLength = 0;
    while (*src != '\0')
    {
       iLength++;
       src++;
    }
        src--;   // Because *src will points to end of array;

    
    for( ; iLength != 0;  iLength--)
    {
        *dest = *src;
        src--;
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

     strcpyReverse( Arr , Brr );

     printf("String After Editing Coppy is : %s\n",Brr);

    return 0;
}