// Implementations of all Behaviours;
#include<iostream>
using namespace std;

// DESTRUCTOR !!1

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

void SinglyLL :: DeleteFirst ( )
{
    if ( _First == NULL)  // LL is empty
    {
        return ;
    }
    else if ( _First -> next == NULL) //One Node Linked List
    {
        delete _First;  // free ( First );
        _First = NULL;
    }
    else  // More Than One Node in LL;
    {
        PNODE temp = _First;
        _First = _First -> next;
        delete temp;
    }
    _iCount --;
}

void SinglyLL :: DeleteLast ( )
{
    if ( _First == NULL)  // LL is empty
    {
        return ;
    }
    else if ( _First -> next == NULL) //One Node Linked List
    {
        delete _First;  // free ( First );
        _First = NULL;
    }
    else  // More Than One Node in LL;
    {
        PNODE temp = _First ;
        while ( temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = NULL;
    }
    _iCount --;
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
    PNODE temp = _First;
    for ( int iCnt = 1; iCnt <= _iCount ; iCnt ++)
    {
        temp = _First;
        _First = _First -> next;
        delete temp;
    }
    if ( _First == NULL)
    {
        cout<<"Deleted Succesfull !!!\n";
    }
}

void SinglyLL :: InsertAtPos ( int No , int iPos)
{
// No need to Call Count method because of _iCount Variavle
        if (( iPos < 1) || ( iPos > _iCount + 1) )
        {
            cout<<"InValid Position \n";
            return ;
        }
    if ( iPos == 1)
    {
        InsertFirst ( No);
    }
    else if ( iPos == _iCount + 1 )
    {
        InsertLast ( No);
    }
    else 
    {
        PNODE temp = _First ; 
        for ( int iCnt = 1 ; iCnt < iPos -1 ; iCnt ++)
        {
            temp = temp -> next;
        }
        PNODE newn = new NODE;
            newn -> data = No;
            newn -> next = NULL;

        newn -> next = temp -> next;
        temp -> next = newn ;

        _iCount ++;
    }
}

void SinglyLL :: DeleteAtPos ( int iPos)
{
// No need to Call Count method because of _iCount Variavle
        if (( iPos < 1) || ( iPos > _iCount ) )
        {
            cout<<"InValid Position \n";
            return ;
        }
    if ( iPos == 1)
    {
        DeleteFirst ();
    }
    else if ( iPos == _iCount )
    {
        DeleteLast ();
    }
    else 
    {
        PNODE temp = _First ; 
        for ( int iCnt = 1; iCnt < iPos - 1 ; iCnt ++)
        {
            temp = temp -> next;
        }
        PNODE tempX = temp -> next;
        temp -> next = temp -> next -> next;
        delete tempX;
        _iCount --;     
    }
}

int main ()
{      
    SinglyLL obj ; 

    int iChoice  =  0 ;
    int iValue = 0;
    int iPosition =  0;

    cout<<"Marvellous Linked List Application \n";

    while (1)
    {
        cout<<"----------------------------------------------------\n";
        cout<<"Please Enter Ypur Choice : \n"<<endl;
        cout<<" 1 : Insert Node at First Position \n";
        cout<<" 2 : Insert Node at Last Position \n";
        cout<<" 3 : Insert Node at Given Position \n";
        cout<<" 4 : Delete Node at First Position \n";
        cout<<" 5 : Delete Node at last Position \n";
        cout<<" 6 : Delete Node at Given Position \n";
        cout<<" 7 : Display Linked List \n";
        cout<<" 8 : Count Numner of Nodes from Linked List  \n";
        cout<<" 9 : Terminate Application \n";

        cout<<"----------------------------------------------------\n";

        cin >> iChoice ; 

        switch ( iChoice)
        {
            case 1 :
            cout<<"Enter Value \n";
            cin>>iValue;
            obj.InsertFirst ( iValue);
        ////IMP ( obj .  )///
            break;
            
            case 2 :
            cout<<"Enter Value \n";
            cin>>iValue;
            obj.InsertLast ( iValue);
            break;
            
            case 3 :
            cout<<"Enter Value \n";
            cin>>iValue;
            cout<<"Enter Position \n";
            cin>>iPosition;
            obj.InsertAtPos( iValue , iPosition);
            break;

            case 4 :
            obj.DeleteFirst ();
            break;

            case 5 :
            obj.DeleteLast ();
            break;

            case 6 :
            cout<<"Enter Position \n";
            cin>>iPosition;
            obj.DeleteAtPos( iPosition);
            break;

            case 7 :
            obj.Display ();
            break;

            case 8 :
            cout<<"Bumber of Nodes are : "<<obj.Count()<<"\n";
            break;

            case 9 :
            cout<<"Thank You for Using the Apllication \n";
            return 0;

            default :
            cout<<"Invalid Choice : \n";
            break;

        }
    }

   return 0;
}