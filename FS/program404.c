#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>


int main()
{ 

    char FileName[256];
    int fd  = 0 ;
    char Arr[10];
    int iRet = 0 ;

    printf("Enter the File that ypu want to delete \n");
    scanf("%s" , FileName);

    fd =  open(FileName , O_RDONLY);

    iRet = read ( fd , Arr , 10);
    write(1 , Arr , iRet);


    iRet = read ( fd , Arr , 10);
    write(1 , Arr , iRet);


    iRet = read ( fd , Arr , 10);
    write(1 , Arr , iRet);


    iRet = read ( fd , Arr , 10);
    write(1 , Arr , iRet);


    iRet = read ( fd , Arr , 10);
    write(1 , Arr , iRet);


    iRet = read ( fd , Arr , 10);
    write(1 , Arr , iRet);


    iRet = read ( fd , Arr , 10);
    write(1 , Arr , iRet);

    return 0;
} 