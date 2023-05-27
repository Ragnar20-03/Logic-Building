#include<iostream>

using namespace std;

class Number {

    public :
    int Maximum(int iNo1, int iNo2)
    {
        if(iNo1 > iNo2)
        {
            return iNo1;
        }
        else
        {
            return iNo2;
        }
    }
};

int main()
{
    Number nObj;

    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First Number"<<"\n";
    cin >>iValue1;

    cout<<"Enter Secind Number "<<"\n";
    cin>>iValue2;

    iRet = nObj.Maximum(iValue1 , iValue2);  

    cout<<"Maximum Number is :"<<iRet<<"\n";

    return 0;
}