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
};

template <class T>
ArrayX <T>:: ArrayX( int iNo)
{
    cout<<"Inside Constructor\n";
    this -> iSize = iNo;
    this -> Arr = new T [iSize];
}

template <class T>
ArrayX <T>:: ~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete []Arr;
}

template <class T>
void ArrayX <T>:: Accept()
{
    cout<<"Inside Accept\n";
    cout<<"Enter the Elements : \n";
    for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

template <class T>
void ArrayX <T>:: Display()
{
    cout<<"Inside Display\n";
    cout<<"Elements of Array are : \n";
    for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    cout<<"Inside Main\n";

    int iValue = 0 ;
    cout<<"Enter the size of Array\n";
    cin>>iValue;

// Static Object
    // ArrayX <int > obj(iValue);
// Dynamic object;
    ArrayX <int> *aobj = new <int> ArrayX(iValue);
    
    aobj->Accept();
    aobj->Display();

    delete aobj;

    cout<<" End of Main\n";
    return 0;

}