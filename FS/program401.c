#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>


int main()
{ 

    char FileName[256];

    printf("Enter the File that ypu want to delete \n");
    scanf("%s" , FileName);

    remove(FileName);

    return 0;
} 