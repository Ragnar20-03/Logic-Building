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
        void BubbleSortEffecient();
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
void ArrayX < T > :: BubbleSortEffecient()
{
    T temp ;
    int i = 0 ; int j = 0 ;
    bool flag = false;
    for ( i = 0 ; i< iSize ; i++)
    {
        flag = false;
        for ( j= 0 ; j  < iSize - i -1 ; j++)
        {
            if ( Arr[j] < Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = true;
            }
        }
        if ( flag == false)
        {
            break;
        }
        cout<<"Data After pass : "<<i+1<<"\n";
        Display();
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
    aobj -> BubbleSortEffecient();
    cout<<"Data After Sorting \n";
    aobj->Display();


    delete aobj;

    return 0;

}