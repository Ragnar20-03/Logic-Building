#include<iostream>
using namespace std;

void DusplayHexaDecimal(int iNo)
{
    int iDigit = 0;
    cout <<" Hex Conversion of :" <<iNo<<"is:\n";

    while (iNo != 0)
    {
        iDigit = iNo%16;
        if(iDigit <= 9)
        {
            cout<<iDigit;
        }
        else
        {
            switch(iDigit)
            {
                case 10: 
                    cout<<"A";
                    break;
                case 11: 
                    cout<<"B";
                    break;
                case 12: 
                    cout<<"C";
                    break;
                case 13: 
                    cout<<"D";
                    break;
                case 14: 
                    cout<<"E";
                    break;
            }
        }
        iNo = iNo /16;
    }  
}

int main()
{
    int iValue = 0;

    cout<<"enter First Number\n";
    cin>>iValue;

    DusplayHexaDecimal(iValue);

    return 0;
}

