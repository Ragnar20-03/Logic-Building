#include<iostream>
using namespace std;

// 1st Approach

typedef struct  Node
{
    int data ; 
    struct Node * next;
}NODE , * PNODE , ** PPNODE;


class SinglyLL
{ 
    public : 
      PNODE First ;  //Characteristics;

        SinglyLL ();

        void InsertFirst ( int No);
        void InsertLast  ( int No);
        void InsertAtPos   ( int No , int iPos);

        void DeleteFirst  ( );
        void Deletelast   ( );
        void DeleteAtPos  ( );

        void Display ( );
        int Count ( );

};

int main ()
{      


    return 0;
}