#include<stdio.h>
#include<stdlib.h>

typedef struct Node 
{
    struct Node * prev ;
    int data ;
    struct Node * next ;
}NODE , *PNODE , ** PPNODE;

void InsertFirst ( PPNODE Head , PPNODE Tail , int No)
{
    PNODE newn = NULL:
        newn = (PNODE) malloc (sizeof (NODE));
        newn -> prev = NULL;
        newn -> data = No;
        newn -> next = NULL;
    
    if ( (*Head == NULL) && ( *Tail == NULL))
    {
        *Head = newn ;
        *Tail = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head -> prev = newn;

        *Head = newn;
    }
    (*Head) -> prev = *Tail;
    (*Tail) -> next = *Head

}
void InsertLast( PPNODE Head , PPNODE Tail , int No )
{
    PNODE newn = NULL:
        newn = (PNODE) malloc (sizeof (NODE));
        newn -> prev = NULL;
        newn -> data = No;
        newn -> next = NULL;
    
    if ( (*Head == NULL) && ( *Tail == NULL))
    {
        *Head = newn ;
        *Tail = newn;
    }
    else
    {
        (*Tail )-> next = newn;
        newn -> prev = *Tail;

        *Tail = *Tail -> next ; //*Tail = newn;
    }
    (*Head) -> prev = *Tail;
    (*Tail) -> next = *Head
}
void InsertAtPos ( PPNODE Head , PPNODE Tail , int No , int iPos)
[
    
]
void DeleteFirst ( PPNODE Head , PPNODE Tail )
{

}
void DeleteLast( PPNODE Head , PPNODE Tail )
{
    
}
void DeleteAtPos ( PPNODE Head , PPNODE Tail ,  int iPos)
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
    PNODE Last = NULL;

    return 0;
}