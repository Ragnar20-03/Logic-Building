#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    struct Node * prev;   //#
    int data ;
    struct Node * next;
}NODE , *PNODE , **PPNODE;


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

void DeleteAtPos ( PPNODE Head , int Pos )
{
    int iLength = Count(*Head );
        if (( Pos < 1) || (Pos > iLength ) )
        {
            printf("Invalide Position .. \n");
            return;
        }
    
    if ( Pos == 1)
    {
        DeleteFirst( Head  );
    }
    else if ( Pos == iLength + 1)
    {
        DeleteLast( Head );
    }
    else
    {   
        PNODE temp = *Head;
        for (int iCnt = 1; iCnt < Pos -1 ; iCnt ++)
        {
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        free (temp -> next -> prev); //#
        temp -> next ->prev =  temp; //#
    }
}
void InsertAtPos ( PPNODE Head , int No , int Pos)
{
    int iLength = Count(*Head );
        if (( Pos < 1) || (Pos > iLength + 1) )
        {
            printf("Invalide Position .. \n");
            return;
        }
    
    if ( Pos == 1)
    {
        InsertFirst( Head , No );
    }
    else if ( Pos == iLength + 1)
    {
        InsertLast( Head , No );
    }
    else
    {
        PNODE newn = (PNODE) malloc ( sizeof(NODE));
            newn -> prev = NULL;
            newn -> data = No;
            newn -> next = NULL;
        
        PNODE temp = *Head;
        for (int iCnt = 1; iCnt < Pos -1 ; iCnt ++)
        {
            temp = temp -> next;
         }
        newn -> next = temp -> next; //1
        temp -> next -> prev = newn; //# //2

        temp -> next = newn; //3
        newn -> prev = temp;   //4 //#
    }
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

    InsertAtPos ( &First , 899 , 3);

    Display( First );

    DeleteAtPos(&First , 3);

    // DeleteFirst (&First);
    // DeleteLast (&First);

    Display(First);


    return 0;
}