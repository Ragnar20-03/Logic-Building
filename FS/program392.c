#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>



int main()
{ 
    int fd = 0 ;
    char Fname[30];

    printf("Enter the File name to open \n");
    scanf("%s" , Fname);
    fd = open(Fname , O_RDONLY);
    if ( fd == -1)
    {
        printf("Unable to open file .. \n");
        return -1;
    }
    else 
    {
        printf("File open Succesfully with fd : %d \n",fd);
    }

    close(fd);

    return 0;
} 