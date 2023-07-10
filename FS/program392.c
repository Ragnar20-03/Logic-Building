#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>



int main()
{ 
    int fd = 0 ;
    char Fname[30];

    printf("Enter the File name to Create \n");
    scanf("%s" , Fname);
    fd = creat(Fname , 0777);
    if ( fd == -1)
    {
        printf("Unable to Create  file .. \n");
        return -1;
    }
    else 
    {
        printf("File open Succesfully Created \n");
    }

    return 0;
} 