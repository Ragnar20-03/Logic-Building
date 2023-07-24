#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node 
{
    int data;
    struct Node * lchild ;
    struct Node * rchild;
}NODE , * PNODE , **PPNODE;

void Insert(PPNODE Head , int No)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE) malloc(sizeof(NODE));
    newn -> data = No;
    newn -> lchild = NULL;
    newn -> rchild = NULL;

    if ( *Head == NULL)
    {
        *Head = newn;
    }
    else 
    {
        while (1)
        {
            if ( No == (temp -> data ))
            {
                printf("Duplicate Element : Unable to Insert\n");
                free(newn);
                break;
            }
            else if ( No > temp -> data)
            {
                if ( temp -> rchild == NULL)
                {
                    temp -> rchild = newn ;
                    break;
                }
                else 
                {
                    temp = temp -> rchild;
                }
            }
            else if ( No < temp -> data)
            {
                if ( temp -> lchild == NULL)
                {
                    temp -> lchild = newn;
                    break;
                }
               else 
                {
                    temp = temp -> lchild;
                }
            }
        }
    }

}

void Preorder( PNODE Head)
{   
    if (Head != NULL)
    {
        printf("%d\t" , Head -> data);
        Preorder(Head -> lchild);
        Preorder(Head -> rchild);
    }
}
void Postorder( PNODE Head)
{   
    if (Head != NULL)
    {
        Postorder(Head -> lchild);
        Postorder(Head -> rchild);
        printf("%d\t" , Head -> data);
    }
}
void Inorder( PNODE Head)
{   
    if (Head != NULL)
    {
        Inorder(Head -> lchild);
        printf("%d\t" , Head -> data);
        Inorder(Head -> rchild);
    }
}

bool Search(PNODE Head , int No)
{
    bool bFlag = false;

    if ( Head == NULL)
    {
        printf("Tree is Empty \n");
        return false;
    }
    
    while ( Head != NULL)
    {
        if ( No == Head -> data)
        {
            bFlag = true;
            break;
        }
        else if (No > Head -> data)
        {
            Head = Head -> rchild;
        }
        else if ( No < Head -> data)
        {
            Head = Head -> lchild;
        }
    }
    return bFlag;
}

int main()
{
    PNODE First = NULL;

    Insert(&First , 21);
    Insert(&First , 25);
    Insert(&First , 15 );
    Insert(&First , 89 );
    Insert(&First , 56 );
    Insert(&First , 1566);
    Insert(&First , 12);
    Insert(&First , 13 );
    Insert(&First , 14 );
    Insert(&First , 15 );
    Insert(&First , 16 );
    Insert(&First , 178 );

    printf("Elements in PreOrder Format:\n");
    Preorder(First);

    printf("Elements in PostOrder Format:\n");
    Postorder(First);

    printf("Elements in Inorder Format:\n");
    Inorder(First);

    if ( Search(First , 889))
    {
        printf("True\n");
    }
    else 
    {
        printf("False\n");
    }

    return 0;
}