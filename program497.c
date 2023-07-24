#include<stdio.h>
#include<stdlib.h>

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

int main()
{
    PNODE First = NULL;

    Insert(&First , 21);
    Insert(&First , 25);
    Insert(&First , 15 );

    printf("Elements in PreOrder Format:\n");
    Preorder(First);

    printf("Elements in PostOrder Format:\n");
    Postorder(First);

    printf("Elements in Inorder Format:\n");
    Inorder(First);

    return 0;
}