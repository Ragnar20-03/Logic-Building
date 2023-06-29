#include<iostream>
using namespace std;

// int iCount ; 

typedef struct  Node
{
    int data ; 
    struct Node * next;
}NODE , * PNODE , ** PPNODE;


class SinglyLL
{ 
    public : 
      PNODE First ;  //Characteristics;
      int iCount ;   // Charactrictics;

        SinglyLL ();

        void InsertFirst ( int No);
        void InsertLast  ( int No);
        void InsertAtPos   ( int No , int iPos);

        void DeleteFirst  ( );
        void Deletelast   ( );
        void DeleteAtPos  ( int iPos );

        void Display ( );
        int Count ( );

};

int main ()
{      
    SinglyLL obj1 ();

    return 0;
}