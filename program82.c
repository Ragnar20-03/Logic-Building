#include<stdio.h>
#include<stdlib.h>


void Demo(int Arr[] , int iLength){

    
}

int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iCnt =0;


    printf("Enter Number of Elements..\n");
    scanf("%d",&iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to Allocate Memoty..\n");
        return -1;

    }

    printf("Enter the number of elements..\n");
    for (iCnt =0; iCnt < iSize ; iCnt ++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("ELements are .. \n");

    for (iCnt =0; iCnt < iSize ; iCnt ++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    printf("\n\n");
    Demo(ptr , iSize);

    free(ptr);
    
    return 0;
}