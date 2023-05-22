#include<stdio.h>


// Coppy Reverse  string into Another  

void strcpyReverse( char *src , char *dest)
{
    int iCnt = 0;
    int iLength = 0;
    while (*src != '\0')
    {
       iLength++;
       src++;
    }
        src--;   // Because *src will points to end of array;

    while(iLength != 0)
    {
        *dest = *src;
        src--;

        dest++;
        iLength--;
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