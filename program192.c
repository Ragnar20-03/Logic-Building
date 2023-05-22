#include<stdio.h>

// Concact   string  by given number 2nd Approach


void strCatX( char *src , char *dest , int iLength)
{
    while(*dest != '\0')
    {
        *dest++;
    }
    // For White Space before Concatination
    *dest = ' '; 
    dest++;

    while((*src != '\0') && (iLength != 0) )
    {
        *dest = *src;
        dest++;
        src++;

        iLength --;
    }

    *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;;

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter Number of letters you want to concate : \n");
    scanf("%d",&iNo);

     strCatX( Arr , Brr , iNo );

     printf("String After Cncatination is  : %s\n",Brr);

    return 0;
}