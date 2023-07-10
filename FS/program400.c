#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>


int main()
{ 
    int fd = 0 ;
    char Fname[30];
    char *Arr = NULL ;
    int iRet = 0 ;
    int iSize = 0 ;

    printf("Enter the File name to open \n");
    scanf("%s" , Fname);
 
    printf("Enter Number of bytes to Read \n");
    scanf("%d" ,&iSize);


    fd = open(Fname , O_RDWR | O_APPEND);
    if ( fd == -1)
    {
        printf("Unable to open file .. \n");
        return -1;
    }

    Arr = (char*)malloc(iSize);

    iRet = read ( fd, Arr , iSize);


    printf("%d  Bytes succesfully return in File \n" , iRet );
    write ( 1 ,Arr , iRet);

    close(fd);
    free(Arr);

    return 0;
} 