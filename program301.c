

#include<stdio.h>
#include<stdlib.h>

typedef struct Node 
{
    struct Node * prev ;
    int data ;
    struct Node * next ;
}NODE , *PNODE , ** PPNODE;


int Count ( PNODE Head , PNODE Tail)
{
    int iCount = 0;
    if ( (Head != NULL) && (Tail != NULL))
    {
        do 
        {
            iCount ++;
            Head = Head -> next;
        }while(Head != Tail -> next);
        return iCount;
    }
    else
    {
        return 0;
    }
}
void Display ( PNODE Head , PNODE Tail)
{
    int iRet = 0;
        iRet = Count ( Head , Tail);
    if ( (Head != NULL) && (Tail != NULL))
    {
        do 
        {
            printf(" %d : " , Head -> data);
            Head = Head -> next;
        }while(Head != Tail -> next);
        printf("\n");
    }
    else
    {
        printf("Linked List is Empty..  \n");
    }
    printf("Number of Nodes  Is : %d \n", iRet);
} 

void InsertFirst ( PPNODE Head , PPNODE Tail , int No)
{
    PNODE newn = NULL;
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
    {;
        (*Head )-> prev = newn;

        *Head = newn;
    }
    (*Head) -> prev = *Tail;
    (*Tail) -> next = *Head;

}
        newn -> next = *Head;
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
    (*Tail) -> next = *Head;
}

void DeleteFirst ( PPNODE Head , PPNODE Tail )
{
    if ( (*Head == NULL) || ( *Tail == NULL))
    {
        return;
    }
    else if ( *Head == *Tail)
    {
        free ( *Head );
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head ) -> next;

    }
}
void DeleteLast( PPNODE Head , PPNODE Tail )
{
    if ( (*Head == NULL) || ( *Tail == NULL))
    {
        return;
    }
    else if ( *Head == *Tail)
    {
        free ( *Head );
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail ) -> perv ;
        free((*Head) -> prev); //free (*Head -> prev)

        (*Tail ) -> next = *Head;
        (*Head ) -> prev = *Tail;
        
    }
    
}
void DeleteAtPos ( PPNODE Head , PPNODE Tail ,  int iPos)
{   
    int iLength = 0;
    iLength = Count ( *Head , *Last);
    
    if ( (iPos < 0) || ( iPos > iLength ))
    {
        printf("InValid Position \n");
        return ;
    }
    if ( iPos == 1)
    {
        InsertFirst ( Head , Tail)
    }
    else if ( iPos == iLength )
    {
        InsertLast ( Head , Tail );
    }
    else 
    {
        PNODE temp = *Head ; 
        for ( int iCnt = 1; iCnt < iPos -1 ; iCnt ++)
        {
            temp = temp -> next;
        }
        PNODE newn = (PNODE) malloc (sizeof (NODE));
            newn -> data = No;
            newn -> prev = NULL;
            newn -> next = NULL;
        
        temp -> next = temp -> next -> next;
        free ( temp -> next -> prev);
        temp -> next -> prev = temp;

    }
}

void InsertAtPos ( PPNODE Head , PPNODE Tail , int No , int iPos)
{
    int iLength = 0;
    iLength = Count ( *Head , *Last);
    
    if ( (iPos < 0) || ( iPos > iLength + 1))
    {
        printf("InValid Position \n");
        return ;
    }
    if ( iPos == 1)
    {
        InsertFirst ( Head , Tail , No)
    }
    else if ( iPos == iLength + 1)
    {
        InsertLast ( Head , Tail , No);
    }
    else 
    {
        PNODE temp = *Head ; 
        for ( int iCnt = 1; iCnt < iPos -1 ; iCnt ++)
        {
            temp = temp -> next;
        }
        PNODE newn = (PNODE) malloc (sizeof (NODE));
            newn -> data = No;
            newn -> prev = NULL;
            newn -> next = NULL;
        
        newn -> next = temp -> next;
        temp -> next -> prev = newn;

        temp -> next = newn;
        newn -> prev = temp;
        
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;

    InsertFirst ( &First , &Last , 51);
    InsertFirst ( &First , &Last , 21);
    InsertFirst ( &First , &Last , 11);

    InsertLast ( &First , &Last , 101);
    InsertFirst ( &First , &Last , 111);
    InsertFirst ( &First , &Last , 121);

    Display ( First , Last);

    DeleteFirst ( &First , &Last);
    DeleteLast ( &First , &Last);

    Display ( First , Last);

    return 0;
}   