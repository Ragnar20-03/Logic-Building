#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management
// void Demo(int *Arr, int iLength)
void Demo(int Arr[], int iLength)
//  * = []  means Arr[] == *Arr
{
    // Step 5 : Perform the operation on array 
}

int main()          // Entry point function
{
    int iSize = 0;  // To store size of array
    int *ptr = NULL;// To store address of array
    int iCnt = 0;   // Loop Counter

    // Step1 : Accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);    
    // Step2 : Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));
    // Step3 : Accept the values from user
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
        //  & ptr[iCnt] means ptr chya iCnt chya Addrees wr data takayacha ahe;
    }
// //////////////////////////////////////////////////////////////////////////

    // printf("%d\n",*ptr); -> 10  Value
    // ptr++;               -> 404 Adrees
    // printf("%d\n",*ptr); -> 20  Value
    // ptr++;               -> 408 Adress
    // printf("%d\n",*ptr); -> 30  Value

// We Dont Change ptr as ++ or -- instead we use Counter iCnt;

// //////////////////////////////////////////////////////////////////////////

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }


    // Step 4: Pass the array to the function
    Demo(ptr,iSize);    // Demo(400,4);


    // Step 6: Deallocate the memory of array
    free(ptr);

    if(ptr == NULL)
    {
        printf("Memory Dealoocated susscesfyyly\n");
    }
    else 
    {
        printf("Memory Not DELETED\n");
    }

    return 0;       // Return success to OS
}