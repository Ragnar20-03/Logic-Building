// EvenDisplay of N numbers
#include<stdio.h>
#include<stdlib.h>

int EvenDisplay(int Arr[] , int iLength)
{
    for (int iCnt =0; iCnt<iLength; iCnt++)
    {
        if(((Arr[iCnt]) % 2 ) == 0)
        {
            printf("%d\n" , Arr[iCnt]);
        }
    }
    
}

int main()
{       
    int iSize = 0;
    int *ptr = NULL;
    int iCnt =0; 
    int iRet =0 ;

    printf("Enter the Size..");
    scanf("%d",&iSize);

    printf("Enter The Numbers");

    ptr = (int *) malloc (iSize * sizeof(int));

    for(iCnt=0; iCnt<iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    for(iCnt=0; iCnt<iSize ; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

      EvenDisplay(ptr , iSize);

    free(ptr);
    return 0;
}