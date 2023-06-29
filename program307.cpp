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
        void DeleteLast   ( );
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
    PNODE newn = NULL;
        newn = new NODE; // newn = (PNODE) malloc (sizeof ( NODE ));
    
    newn -> data = No;
    newn -> next = NULL;

    if ( _First == NULL) // OR ( iCount == 0)/  / LL is empty;
    {
        _First = newn ;
    }
    else   // LL Contains One Node At Least;
    {
        newn -> next = _First ; 
        _First = newn;
    }
    _iCount ++;
}

void SinglyLL :: InsertLast ( int No)
{
    PNODE newn = NULL;
        newn = new NODE; // newn = (PNODE) malloc (sizeof ( NODE ));
    
    newn -> data = No;
    newn -> next = NULL;

    if ( _First == NULL) // OR ( iCount == 0)/  / LL is empty;
    {
        _First = newn ;
    }
    else   // LL Contains One Node At Least;
    {
        PNODE temp = _First ;
        while ( temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn ;
    }
    _iCount ++;
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
    cout<<"Inside Constructor \n";

    _First = NULL;               //Constuctor;
    _iCount = 0;
}

int main ()
{      
    SinglyLL obj1;
    SinglyLL obj2;

    // cout<<"Size of Linked list is : "<<obj1._iCount; // ERROR

    return 0;
}