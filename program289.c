#include<stdio.h>
#include<stlib.h>

typedef struct Node 
{
    int data;
    struct Node * next ;
}NODE, * PNODE, ** PPNODE;

void InsertFirst ( PPNODE Head , PPNODE Tail , int No)
{
    PNODE newn = NULL;
        newn = (PNODE) malloc ( sizeof(NODE));
        newn -> data = No;
        newn -> next = NULL;
    
    if ( (*Head == NULL) && (*Tail == NULL)) //LL is Empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else // LL Contains at Least One Node
    {
        newn -> next = *Head ;
        *Head = newn;
    }
      (*Tail) -> next = *Head;

}

void InsertLast ( PPNODE Head , PPNODE Tail , int No)
{
    PNODE newn = NULL;
        newn = (PNODE) malloc ( sizeof(NODE));
        newn -> data = No;
        newn -> next = NULL;
    
    if ( (*Head == NULL) && (*Tail == NULL)) //LL is Empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else // LL Contains at Least One Node
    {
        (*Tail) -> next = newn;
        (*Tail) = *Tail -> next; // *tail = newn;
    }
        (*Tail) -> next = *Head;

}

void InsertAtPos ( PPNODE Head , PPNODE Tail , int No , int iPos)
{
    
}

void DeleteFirst ( PPNODE Head , PPNODE Tail )
{
    
}

void DeleteLast ( PPNODE Head , PPNODE Tail )
{
    
}

void DeleteAtPos ( PPNODE Head , PPNODE Tail , int iPos ) 
{
    
}

void Display ( PNODE Head , PNODE Tail)
{
    
}
int Count ( PNODE Head , PNODE Tail)
{
        return 0;
}


int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;      //#

    return 0;
}