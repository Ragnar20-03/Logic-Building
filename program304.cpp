#include<iostream>
using namespace std;

// int iCount  , characteristics private :; 

typedef struct  Node
{
    int data ; 
    struct Node * next;
}NODE , * PNODE , ** PPNODE;


class SinglyLL
{ 
    private : 
      
      PNODE First ;  //Characteristics;
      int iCount ;   // Charactrictics;

    public :
      
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

// Implementations of all Behaviours;


int main ()
{      
    SinglyLL obj1 ();

    return 0;
}