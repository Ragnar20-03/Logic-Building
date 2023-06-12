//  Display() 
// 258.c For Decoration Purpose
#include<stdio.h>
#include<stdlib.h>


struct Node 
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;


void InsertAtPos(PPNODE Head , int No , int Pos)
{

}

void DeleteFirst(PPNODE Head)
{

}

void DeleteLast(PPNODE Head)
{

}

void DeleteAtPos(PPNODE Head , int Pos) 
{

}


void InsertFirst(PPNODE Head , int No )
{
    PNODE newn = NULL;

    //Allocate Memory For Node(structure)
    newn = (PNODE) malloc ( sizeof (NODE));

    // Initialllise the Node
    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL) // LLis Empty
    {

        *Head = newn;
    }
    else             // atleadt contain one node
    {
        newn->next = *Head;
        *Head = newn;
    }

}


int Count(PNODE Head)
{
    int iCnt = 0;
        
    while (Head != NULL)
    {
        iCnt ++;
        Head = Head -> next;
    }
    return iCnt;
}


void Display(PNODE Head)
{
    printf("Elements of Linked list Are : \n");
    while (Head != NULL)
    {
        printf("|%d| -> ",Head-> data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

void InsertLast(PPNODE Head , int No )
{
     PNODE newn = NULL;
     PNODE temp = *Head;

    //Allocate Memory For Node(structure)
    newn = (PNODE) malloc ( sizeof (NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL){

        *Head = newn;
    }
    else
    {
        while(temp -> next != NULL)
        temp = temp -> next;
    }
    temp-> next = newn;
}


int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst( &First , 101);  //InsertFirst(60 , 11)
    InsertFirst( &First , 111 );  //InsertFirst(60 , 11)
    InsertFirst( &First , 51 );  //InsertFirst(60 , 51)  
    InsertFirst( &First , 21 );  //InsertFirst(60 , 21)
    InsertFirst( &First , 11 );  //InsertFirst(60 , 11)

    Display(First);

    iRet = Count(First);
    printf("Number of Nodes Are ..: %d \n",iRet);

    InsertLast(&First , 121);
    InsertLast(&First , 151);

    Display(First);

    iRet = Count(First);
    printf("Number of Nodes Are ..: %d \n",iRet);

    return 0; 
}