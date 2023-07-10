#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>



int main()
{ 
    int fd = 0 ;
    char Fname[30];

    printf("Enter the File name to Create File \n");
    scanf("%s" , Fname);
    fd = creat(Fname , 0777);
    if ( fd == -1)
    {
        printf("Unable to Create File file .. \n");
        return -1;
    }
    else 
    {
        printf("File Create File Succesfully with fd : %d \n",fd);
    }

    close(fd);

    return 0;
} 