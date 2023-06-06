#include<iostream>
using namespace std;

//  Accept 1 numbers and toggle the bit hardCoded Value 7

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X00000040;
    UINT iResult = 0;

    iResult = iNo ^ iMask;
    
    return (iResult);

}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}

/*

    iPos = 7

    iNo   0    1   1   1    0   1   0    0
          0    1   0   0    0   0   0    0
        ----------------------------------------
          0    0   1   1    0   1   0    0      



*/