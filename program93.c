#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ERR_NOTFOUND -1

// Search Last Occurence by Backward LOOP

int SearchLastOccurence(int Arr[] , int iLength, int iNo){

    int iCnt = 0;


    for(iCnt = iLength-1 ;iCnt >= 0 ; iCnt --)
    {
        if(Arr[iCnt] == iNo)
        {
                break;
        }
    }

    
        return iCnt;

}

int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iValue =0;
    int iCnt =0;
    int iRet = 0;


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

    printf("Enter the Element that you want to SearchLastOccurence..\n");
    scanf("%d",&iValue);

    printf("ELements are .. \n");

    for (iCnt =0; iCnt < iSize ; iCnt ++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
   iRet= SearchLastOccurence(ptr , iSize , iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is No Such Element");
    }
    else{
        printf("%d occured at index %d \n",iValue, iRet );
    }


    free(ptr);
    
    return 0;
}