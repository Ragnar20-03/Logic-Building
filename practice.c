#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize=0;
    int * ptr = NULL;

    printf("Emter theSizhe of Epemrnts");
    scanf("%d",&iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Not Allocated");
        return -1;
    } 
    printf("Memory ALlocated");

    return 0;
}