#include<stdio.h>
#include<stdlib.h>

void Demo(int Arr[] , int iLength)
{
    printf("Arr :  %d\n\n", Arr);
    printf("&Arr :  %d\n\n", &Arr);
    printf("&Arr[0] :  %d\n\n", &Arr[0]);
    printf("&Arr[0] :  %d\n\n", Arr[0]);
    printf("&Arr[1] :  %d\n\n", &Arr[1]);
    printf("&Arr[2] :  %d\n\n", Arr[2]);
    printf("&Arr[3] :  %d\n\n", &Arr[3]);
    printf("&Arr[3] :  %d\n\n", Arr[3]);
    Arr[3] = 566;
}

int main()
{

    int *ptr =NULL;
    int iSize =0;
    int iCnt =0;
    
    printf("enter the Size of Arrya\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int) );

    printf("enter the Elements of Arrya\n");

    for (iCnt =0; iCnt<iSize; iCnt++)
    {
        scanf("%d" , &ptr[iCnt]);
    }

    printf("ptr :  %d\n\n", ptr);
    printf("*ptr :  %d\n\n", *ptr);

    printf("ptr1 :  %d\n\n" , &ptr[1]);
    printf("ptr1 :  %d\n\n" , ptr[1]);
    
    ptr++;
    printf("ptr ++ :  %d\n\n", *ptr);
    printf("ptr 2 :  %d\n\n" , &ptr[2]);
    printf("ptr 2 :  %d\n\n" , ptr[2]);
    
    printf("ptr 3 :  %d\n\n" , &ptr[3]);
    printf("ptr 3 :  %d\n\n" , ptr[3]);
    
    printf("Demo Function \n");
    Demo(ptr , iSize);

    printf("ptr 3  After Change:  %d\n\n" , ptr[3]);

    return 0;

}