#include<stdio.h>
#include<stdlib.h>

typedef struct Node 
{
    int data;
    struct Node * next ;
}NODE, * PNODE, ** PPNODE;

int Count ( PNODE Head , PNODE Tail)
{
    int iCount = 0;
    if ((Head != NULL) && ( Tail != NULL))
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
    iRet = Count(Head , Tail);
    if ((Head != NULL) && ( Tail != NULL))
    {
        do 
        {
            printf(" %d : ", Head -> data);
            Head = Head -> next;
        }while(Head != Tail -> next);
        printf("\n ");
    }
    else
    {
        printf("Linked List is Empty !!\n");
    }
    printf("Number of Nodes is : %d \n" , iRet);
}


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
        (*Tail) = (*Tail) -> next; // *tail = newn;
    }
        (*Tail) -> next = *Head;

}



void DeleteFirst ( PPNODE Head , PPNODE Tail )
{
    if ( (*Head == NULL) && (*Tail == NULL))
    {
        return ;
    }   
    else if ( *Head == *Tail )
    {
            free ( *Head);
            *Head = NULL;
            *Tail = NULL;
    }
    else
    {
        *Head = (*Head ) -> next;
        free ( (*Tail) -> next );
        (*Tail )-> next  = *Head ; 
    }
}

void DeleteLast ( PPNODE Head , PPNODE Tail )
{
    if ( (*Head == NULL) && (*Tail == NULL))
    {
        return ;
    }   
    else if ( *Head == *Tail )
    {
            free ( *Head);
            *Head = NULL;
            *Tail = NULL;
    }
    else
    {
        PNODE temp = *Head ;
        while ( temp -> next != *Tail)
        {
            temp = temp -> next;
        }
        free ( *Tail);
        *Tail = temp;
        (*Tail) -> next = *Head;
    }
}

void DeleteAtPos ( PPNODE Head , PPNODE Tail , int iPos ) 
{
    int iLength = Count ( *Head , *Tail);
    if ( (iPos < 0) || ( iPos > iPos    ))
    {
        printf ( "Invalid Position");
        return ;
    }
    if ( iPos == 1)
    {
        DeleteFirst ( Head , Tail ) ;
    }
    else if ( iPos == iLength + 1)
    {
        DeleteLast( Head , Tail );
    }
    else
    {
        PNODE temp = *Head ;
        for (int iCnt = 1 ; iCnt < iPos -1 ; iCnt ++)
        {
            temp = temp -> next;
        }

    }   
}

void InsertAtPos ( PPNODE Head , PPNODE Tail , int No , int iPos)
{
    int iLength = Count ( *Head , *Tail);
    if ( (iPos < 0) || ( iPos > iPos + 1))
    {
        printf ( "Invalid Position");
        return ;
    }
    if ( iPos == 1)
    {
        InsertFirst ( Head , Tail , No) ;
    }
    else if ( iPos == iLength + 1)
    {
        InsertLast( Head , Tail , No);
    }
    else
    {
        PNODE newn = (PNODE) malloc (sizeof(NODE));
            newn -> data = No;
            newn -> next = NULL;

        PNODE temp = *Head ;
        for (int iCnt = 1 ; iCnt < iPos -1 ; iCnt ++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;      //#

    InsertFirst ( &First , &Last , 51);
    InsertFirst ( &First , &Last , 21);
    InsertFirst ( &First , &Last , 11);

    InsertLast ( &First , &Last , 101);
    InsertLast ( &First , &Last , 111);
    InsertLast ( &First , &Last , 121);

    Display(First ,Last);

    DeleteFirst ( &First , &Last);
    DeleteLast( &First , &Last);

    Display ( First , Last);
    

    return 0;
}