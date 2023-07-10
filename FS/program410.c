#include <stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>


int main()
{ 

    char FileName[256];
    int fd  = 0 , iCnt = 0 , iCount = 0 ;
    char Arr[10];
    int iRet = 0 ;

    printf("Enter the File that ypu want to delete \n");
    scanf("%s" , FileName);

    fd =  open(FileName , O_RDONLY);

   while ( (iRet = read ( fd , Arr , 10) )!=  0)
   {

        for (  iCnt = 0 ; iCnt < iRet ; iCnt++)
        {
            if ( (Arr[iCnt] >= 'a') && Arr[iCnt] <= 'z')
            {
                iCount++;
            }
        }

   }
    printf("Number of Small Case Letter is  :  %d " , iCount);

    return 0;
} 