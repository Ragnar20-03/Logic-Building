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
        void SelectionSort();
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
template< class T>
void ArrayX <T>::SelectionSort()
{
    int i = 0 , j = 0 , min_index = 0 ;
    T temp ;   

    for ( i= 0 ; i< iSize -1 ; i++)
    {
        min_index = i;
        for ( j = i+1 ; j< iSize ; j++)
        {
            if ( Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
    }
}

int main()
{

    int iValue = 0 ;
    bool bRet = false;

    cout<<"Enter the size of Array\n";
    cin>>iValue;

    ArrayX <int> *aobj = new  ArrayX <int>(iValue);
    
    aobj->Accept();
    cout<<"Data Before Sorting \n";
    aobj->Display();
    aobj -> SelectionSort();
    cout<<"Data After Sorting \n";
    aobj->Display();


    delete aobj;

    return 0;

}