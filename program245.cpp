#include<iostream>
using namespace std;

//  Accept 1 numbers and toggle the bit hardCoded Value 7

typedef unsigned int UINT;

UINT OffBit(UINT iNo , UINT iPos )
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask   ;
    if(iResult == iMask) //Bit is On
    {
        return (iNo ^ iMask);
    }
    else
    {
        return  iNo;
    }
}
int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter Bit position : "<<"\n";
    cin>>iBit;
    
    iRet = OffBit(iValue , iBit);

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