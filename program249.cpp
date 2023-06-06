#include<iostream>
using namespace std;

//toogle bit if on  Without Checking if on or Not
//  1111    1111    1111    1111    1111    1111    1011    1111
// F        F       F       F       F       F       B       F


typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0XFFFFFFBF;
    UINT iResult = 0;

    iResult = iNo & iMask   ;

    return iResult;
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

    iNo =  56
    iPos = 7

    iNo            0    0   1   1    1   0   0    0
    iMask          1    0   1   1    1   1   1    1
                ----------------------------------------
                   0    0   1   1    0   1   0    0      

    iNo =  120
    iPos = 7

    iNo            0    1   1   1    1   0   0    0
    iMask          1    0   1   1    1   1   1    1
                ----------------------------------------
                   0    0   1   1    0   1   0    0      


*/