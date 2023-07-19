#include<iostream>

using namespace std;

class ArrayX
{
    public :
        int *Arr;
        int iSize;


        ArrayX(int );
        ~ArrayX();
        void Accept();
        void Display();
};

ArrayX :: ArrayX( int iNo)
{
    this -> iSize = iNo;
    this -> Arr = new int [iSize];
}
ArrayX :: ~ArrayX()
{
    delete []Arr;
}

void ArrayX :: Accept()
{
    cout<<"Enter the Elements : \n";
    for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void ArrayX:: Display()
{
    cout<<"Elements of Array are : \n";
    for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0 ;
    cout<<"Enter the size of Array\n";
    cin>>iValue;

    ArrayX aobj(iValue);
    
    aobj.Accept();
    aobj.Display();

    return 0;
}