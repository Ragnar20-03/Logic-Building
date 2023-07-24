#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));         

    newn->data = no;                            
    newn->next = NULL;

    if(*Head == NULL)                           // 3
    {
        *Head = newn;                           // 4
    }
    else
    {
        newn->next = *Head;                     // 5
        *Head = newn;                           // 6
    }
}

void DisplayR(PNODE Head)
{
    if ( Head != NULL)
    {
        printf("%d\t", Head -> data);
        Head = Head -> next;
        DisplayR(Head );
    }
    else 
    {
    printf("\n");
    }
}
void DisplayI(PNODE Head)
{
    while( Head != NULL)
    {
        printf("%d\t",Head -> data);
        Head = Head -> next;
    }
}

int CountI(PNODE Head)
{
    int iCnt = 0 ; 
    while ( Head != NULL)
    {
        iCnt ++;
    }
    return iCnt;
}

int CountR(PNODE Head)
{
    static int iCnt = 0 ;
    if ( Head != NULL)
    {
        iCnt++;
        CountR(Head -> next);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    printf("Elements of Linked List are : \n");

    DisplayR(First);

    printf("Numnber of Nodes Are : %d\n" , CountR(First));

    return 0;
}