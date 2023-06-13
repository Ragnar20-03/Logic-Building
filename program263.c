#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data ; 
    struct Node * next;
} NODE, *PNODE , **PPNODE;




//  1 : Allocate Memory for New Node (newn)
//  2 : Initialllize The Node
//  3 : Check Weathe LL is Empty or Not
//  4 : if Empty store Address of New Node (newn) in First
//  5 : OtherWise store the Address of New Node (newn) inside next pointer of old First Node
//  6 : Update First Pointer with the Address of New Node;
void InsertFirst(PPNODE Head , int No)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE)); // 1

    newn -> data = No;
    newn -> next = NULL; // 2

    if( *Head == NULL)   // 3
    {
        *Head = newn;    // 4
    }
    else                    
    {
        newn -> next = *Head;   // 5
        *Head = newn;           // 6
    }
}


void InsertLast (PPNODE Head , int No)
{
    PNODE temp = *Head;

    PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE));  //1

    newn -> next = NULL;
    newn -> data = No;                  //2

    if(*Head == NULL)           //3
    {
        *Head = newn;           //4
    }
    else
    {
        while (temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void Display ( PNODE Head)
{
    printf("Elements of Linked List Are : \n");
    while ( Head != NULL)
    {
        printf(" : %d : -> ",Head->data);
        Head = Head -> next;
    }
    printf("NULL \n");
}

int Count ( PNODE Head)
{
    int iCount = 0;

    while( Head != NULL)
    {
        iCount ++;
        Head = Head -> next;
    }
    return iCount;
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;

    InsertLast(&First , 11);
    InsertLast(&First , 21);
    InsertLast(&First , 51);
    InsertLast(&First , 101);

    Display ( First ); 
    
    iRet = Count( First );
    printf("Number of Nodes Are : %d \n",iRet ); 

    InsertFirst( &First , 10);
    InsertFirst( &First , 20);
    
    Display ( First ); 
    
    iRet = Count( First );
    printf("Number of Nodes Are : %d \n",iRet ); 

    return 0;
}