#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>



int main()
{ 
    int fd = 0 ;
    char Fname[30];
    char Arr[] = "abcdefghijklmnopqrstuvwxyz";
    int iRet = 0 ;

    printf("Enter the File name to open \n");
    scanf("%s" , Fname);
    fd = open(Fname , O_RDWR);
    if ( fd == -1)
    {
        printf("Unable to open file .. \n");
        return -1;
    }

    iRet  =  write(fd , Arr ,26 );

    printf("%d  Bytes succesfully return in File \n" , iRet );


    close(fd);

    return 0;
} 