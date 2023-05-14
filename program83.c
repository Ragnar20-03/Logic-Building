#include<stdio.h>
#include<stdlib.h>


int LargestNumber(int Arr[] , int iLength){

    int iCnt =0;
    
    int iMax =Arr[0]; //IMP

    for (iCnt =0; iCnt < iLength; iCnt ++)
    {
        if(Arr[iCnt ] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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
    
    iRet = LargestNumber(ptr , iSize);

    printf("Largest Number is %d\n",iRet);

    free(ptr);
    
    return 0;
}