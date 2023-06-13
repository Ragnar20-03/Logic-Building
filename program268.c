#include<stdio.h>
#include<stdlib.h>

// Delete At Position ()

typedef struct Node{
    int data ; 
    struct Node * next;
} NODE, *PNODE , **PPNODE;




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

void DeleteFirst (PPNODE Head )
{
    PNODE temp = *Head;

    if (*Head == NULL)      //LL is Empty
    {
        return;
    }

    else if( (*Head) -> next == NULL)   // LL Contains 1 Node;
    {
        free ( *Head);
        *Head = NULL;
    }

    else        // LL contains more than One Node
    {
        *Head = (*Head) -> next;
        free (temp);
    }
}

void DeleteLast (PPNODE Head )
{
    PNODE temp = *Head;

    if (*Head == NULL)      //LL is Empty
    {
        return;
    }
            /////////
    else if( (*Head ) -> next == NULL)   // LL Contains 1 Node;
    {       ///////// -> Operator Associativity And Precedance
        free ( *Head );
        *Head = NULL;
    }

    else        // LL contains more than One Node
    {
        while ( temp -> next -> next != NULL)    //Type 3 While LOOP
        {
            temp = temp -> next;
        }
        free (temp -> next);
        temp-> next = NULL;
    }
}

void InsertAtPos( PPNODE Head , int No , int iPos)
{
    int iLength = 0;
    int iCnt = 0;

    PNODE newn = NULL;
    PNODE temp = *Head;

    iLength = Count(*Head); //  ###

    //  Filter
    if ( ( iPos < 1 ) || (iPos > iLength + 1))
    {
        printf ("InValid Position !! \n");
        return;
    }

    if (iPos == 1)
    {
        InsertFirst (Head , No);
    }
    else if( iPos == iLength + 1)
    {
        InsertLast (Head , No);
    }

    else
    {
        newn = (PNODE) malloc(sizeof(NODE));

        newn -> data = No;
        newn -> next = NULL;

        for(iCnt = 1 ; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }

        // Sequuence is Important
        newn -> next = temp -> next;
        temp -> next = newn;

    }
}

void DeleteAtPos( PPNODE Head , int iPos)
{
    PNODE temp = *Head;
    PNODE tempX = NULL;

    int iLength = 0;
    iLength = Count(*Head); //  ###

    //  Filter
    if ( ( iPos < 1 ) || (iPos > iLength ))
    {
        printf ("InValid Position !! \n");
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst (Head , No);
    }
    else if( iPos == iLength )
    {
         InsertLast (Head , No);
    }

    else
    {
          for(iCnt = 1 ; iCnt < iPos -1; iCnt++)
        {
            temp = temp -> next;
        }   

        tempX = temp -> next;

        temp -> next = temp -> next -> next;
    }
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
    

    InsertFirst( &First , 10);
    InsertFirst( &First , 20);
    

    InsertAtPos ( &First , 25 , 5);

        Display ( First ); 
    
    iRet = Count( First );
    printf("Number of Nodes Are : %d \n",iRet ); 


    DeleteFirst ( &First);
    DeleteFirst ( &First);
    Display ( First ); 
    
    iRet = Count( First );
    printf("Number of Nodes Are : %d \n",iRet ); 

    DeleteLast ( &First );
     Display ( First ); 
    
    iRet = Count( First );
    printf("Number of Nodes Are : %d \n",iRet ); 


    return 0;
}