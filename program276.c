#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    struct Node * prev;   //#
    int data ;
    struct Node * next;
}NODE , *PNODE , **PPNODE;

void InsertFirst ( PPNODE Head , int No)
{
    PNODE newn = NULL;

        newn = (PNODE)malloc ( sizeof(NODE));
        newn -> prev = NULL;  //#
        newn -> data = No;
        newn -> next = NULL;

    if ( *Head == NULL)  //LL is empty
    {
        *Head = newn;

    }
    else // LL contains at least one Node;
    {
        (*Head )-> prev = newn;  //#
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLast ( PPNODE Head , int No)
{
    PNODE newn = NULL;

        newn = (PNODE)malloc ( sizeof(NODE));
    
        newn -> prev = NULL;  //#
        newn -> data = No;
        newn -> next = NULL;

    if ( *Head == NULL)  //LL is empty
    {
        *Head = newn;

    }
    else // LL contains at least one Node;
    {
        PNODE temp = *Head ; 
        while ( temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> prev = temp;  //#

    }
}

void InsertAtPos ( PPNODE Head , int No)
{
    
}

void DeleteFirst ( PPNODE Head )
{
    if ( *Head == NULL)
    {
        return ;
    }
    else if ( (*Head) -> next == NULL)
    {
        free ( *Head );
        *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next ;
        free ( (*Head) -> prev);  //#
        (*Head )-> prev = NULL;   //#
    }
}

void DeleteLast ( PPNODE Head )
{
   if ( *Head == NULL)
    {
        return ;
    }
    else if ( (*Head) -> next == NULL)
    {
        free ( *Head );
        *Head = NULL;
    }
    else
    {
        PNODE temp = *Head ; 
        while ( temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free (temp -> next);
        temp -> next = NULL;
    }

}

void DeleteAtPos ( PPNODE Head )
{
    
}

int Count ( PNODE Head )
{
    int iCount = 0;
      while ( Head != NULL)
    {
     iCount ++;       
    Head = Head -> next;
    }
    return iCount;
}

void Display ( PNODE Head)
{
    printf("Elements of Linkde List are : ... \n");
    printf("|| NULL <=>");
    while ( Head != NULL)
    {
        printf(" %d <=> ", Head -> data);
        Head = Head -> next;
    }
    printf("NULL ||");

    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst ( &First , 101);
    InsertFirst ( &First , 51);
    InsertFirst ( &First , 21);
    InsertFirst ( &First , 11);

    Display( First );

    InsertLast ( &First , 111);
    InsertLast ( &First , 121);

    Display( First );

    return 0;
}