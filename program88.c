#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Search(int Arr[] , int iLength, int iNo){

    int iCnt =0;


    for(iCnt = 0 ;iCnt < iLength ; iCnt ++)
    {
        if(Arr[iCnt] == iNo)
        {

            break;
        }
    }

    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize =0;
    int *ptr =NULL;
    int iValue =0;
    int iCnt =0;
    bool bRet = false;


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

    printf("Enter the Element that you want to search..\n");
    scanf("%d",&iValue);

    printf("ELements are .. \n");

    for (iCnt =0; iCnt < iSize ; iCnt ++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
   bRet= Search(ptr , iSize , iValue);

   if(bRet == true)
   {
    printf("%d is Present in Array\n",iValue);
   }
   else
   {
    printf("%d is Not Present in Array\n",iValue);
   }

    free(ptr);
    
    return 0;
}