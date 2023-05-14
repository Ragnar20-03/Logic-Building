#include<stdio.h>
#include<stdlib.h>

// is Array is Sorted ???s

int MiniMum(int Arr[] , int iLength){

    int iCnt =0;
    
    int iMin =Arr[0]; //IMP

    for (iCnt =0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt ] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}   


int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iCnt =0;
    int iRet =0;


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
    
    iRet = MiniMum(ptr , iSize);

    printf("Smallest Number is %d\n",iRet);

    free(ptr);
    
    return 0;
}