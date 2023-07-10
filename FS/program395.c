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

    printf("Enter the data to writ inside file \n");
    scanf(" %[^'\n']s" , Arr);

    fd = open(Fname , O_RDWR);
    if ( fd == -1)
    {
        printf("Unable to open file .. \n");
        return -1;
    }

    iRet  =  write(fd , Arr ,strlen(Arr) );

    printf("%d  Bytes succesfully return in File \n" , iRet );


    close(fd);

    return 0;
} 