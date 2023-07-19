#include<iostream>

using namespace std;


template<class T>
class ArrayX
{
    public :
        T *Arr;
        int iSize;


        ArrayX(int );
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(T);
        bool BiDiectionalSearch(T);
        bool  BinarySearch(T);
        bool CheckSorted();
};

template <class T>
ArrayX <T>:: ArrayX( int iNo)
{
    this -> iSize = iNo;
    this -> Arr = new T [iSize];
}

template <class T>
ArrayX <T>:: ~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX <T>:: Accept()
{
    cout<<"Enter the Elements : \n";
    for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX <T>:: Display()
{
    cout<<"Elements of Array are : \n";
    for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

template <class T>
bool ArrayX <T> :: LinearSearch(T no)
{
    bool flag = false;
    for ( int iCnt  = 0 ; iCnt < iSize ; iCnt++)
    {
        if ( Arr[iCnt] == no)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

template <class T>
bool ArrayX <T> :: BiDiectionalSearch(T no)
{
    bool flag = false;
    int iStart = 0 ; 
    int iEnd = iSize -1;
    while (iStart <= iEnd)
    {
        if ( Arr[iStart] == no || Arr[iEnd] == no)
        {
            flag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return flag;
}

template<class T>
bool ArrayX < T > :: CheckSorted()
{
    int iCnt = 0 ;
    bool flag = true;

    for (iCnt = 0 ; iCnt < iSize -1 ; iCnt ++)
    {
        if ( Arr[iCnt] <= Arr[iCnt + 1])
        {
            continue;
        }
        else 
        {
            flag = false;
            break;
        }
    }
    return flag;
}

template <class T>
bool ArrayX<T> :: BinarySearch(T no)
{
    bool flag = false;
    int iStart = 0 , iEnd = 0  , iMid = 0  ;
    iStart = 0;
    iEnd = iSize - 1; 
   
    while ( iStart <= iEnd)
    {
        iMid = iStart + ( iEnd - iStart) / 2;
        if (( Arr[iMid] == no) || ( Arr[iStart] == no ) || ( Arr[iEnd] == no)  )
        {
            flag = true;
            break;
        }
        else if ( Arr[iMid] < no)
        {   
            iStart = iMid + 1 ;
        }
        else if ( Arr[iMid] > no)
        {
            iEnd = iMid - 1;
        }
    } 
    return flag;
}

int main()
{

    int iValue = 0 ;
    bool bRet = false;

    // cout<<"Enter the size of Array\n";
    cin>>iValue;

    ArrayX <int> *aobj = new  ArrayX <int>(iValue);
    
    aobj->Accept();
    aobj->Display();

    // cout<<"Enter the elements that you want to search\n";
    // cin>>iValue;

    bRet = aobj -> CheckSorted();
    if (bRet == true)
    {
        cout<<"Sorted Array\n";
    }
    else 
    {
        cout<<" not Sorted Array\n";
    }

    delete aobj;

    return 0;

}