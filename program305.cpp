// Implementations of all Behaviours;
#include<iostream>
using namespace std;

// int iCount  , characteristics private :; 
// Implementations of all Behaviours;


typedef struct  Node
{
    int data ; 
    struct Node * next;
}NODE , * PNODE , ** PPNODE;


class SinglyLL
{ 
    private : 
      
      PNODE _First ;  //Characteristics;
      int _iCount ;   // Charactrictics;

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
/*
    Return_Value Class_Name :: Function_Name ( Parameter_List)
    {
        Function_Body;
    }
*/

void SinglyLL :: InsertFirst ( int No)
{

}

void SinglyLL :: InsertLast ( int No)
{

}

void SinglyLL :: InsertAtPos ( int No , int iPos)
{

}

void SinglyLL :: DeleteFirst ( )
{

}

void SinglyLL :: DeleteLast ( )
{

}

void SinglyLL :: DeleteAtPos ( int iPos)
{

}

void SinglyLL :: Display ( )
{

}

int SinglyLL :: Count ( )
{
    return 0;
}

SinglyLL :: SinglyLL ()
{
    
}

int main ()
{      
    SinglyLL obj1 ;

    return 0;
}