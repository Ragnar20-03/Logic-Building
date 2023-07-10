#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>


int main()
{ 
    int fd = 0 ;
    char Fname[30];
    char Arr[50] ;
    int iRet = 0 ;

    printf("Enter the File name to open \n");
    scanf("%s" , Fname);

    fd = open(Fname , O_RDWR | O_APPEND);
    if ( fd == -1)
    {
        printf("Unable to open file .. \n");
        return -1;
    }

    iRet = read ( fd, Arr , 10);


    printf("%d  Bytes succesfully return in File \n" , iRet );
    write ( 1 ,Arr , iRet);

    close(fd);

    return 0;
} 