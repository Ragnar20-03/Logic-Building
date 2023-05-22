#include<stdio.h>

// Concact   string   

// 1 : Travel till end of dest ;
// 2 : copy data from src to dest;
// 3 : Write '\0'  at end of dest

void strCatX( char *src , char *dest)
{
// 1 : Travel till end of dest ;
    while(*dest != '\0')
    {
        *dest++;
    }
    *dest = ' ';
    dest++;

// 2 : copy data from src to dest;
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

// 3 : Write '\0'  at end of dest
    *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

     strCatX( Arr , Brr );

     printf("String After Cncatination is  : %s\n",Brr);

    return 0;
}