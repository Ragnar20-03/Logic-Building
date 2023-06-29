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
     ~SinglyLL ();

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
    cout<<"Elements of Linked List are : \n";
    PNODE temp = _First  ;
        while ( temp != NULL)
        {
            cout<< " : "<<temp -> data<< "  : ";
            temp = temp -> next;
        }
        cout<<" NULL "<<"\n";
}

int SinglyLL :: Count ( )
{
    return _iCount;
}

SinglyLL :: SinglyLL ()
{
    cout<<"Inside Constructor \n";

    _First = NULL;               //Constuctor;
    _iCount = 0;
}
SinglyLL :: ~SinglyLL ()
{
    cout<<"Inside DestruCtor \n";    //Destructor
}
int main ()
{      
    int iRet = 0;

    SinglyLL obj1;
    SinglyLL obj2;

    obj1.InsertFirst(101);
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.InsertLast ( 89);
    obj1.InsertLast ( 87);
    obj1.InsertLast ( 78);

    obj1.Display();
    iRet = obj1.Count();
    cout<<"Number of Elements of Linked List is  : " <<iRet<<"\n";

    obj2.InsertFirst ( 20);
    obj2.InsertFirst ( 10);
    obj2.InsertLast ( 30);

    obj2.Display();
    iRet = obj2.Count();
    cout<<"Number of Elements of Linked List is  : " <<iRet<<"\n";

    return 0;
}