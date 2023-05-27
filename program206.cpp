#include<iostream>

using namespace std;

class Number {

    public:

    int iNo1 ; 
    int iNo2 ;

    public :
    
    int Maximum()
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
    Number nobj;

    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First Number"<<"\n";
    cin >>iValue1;
    nobj.iNo1 = iValue1;

    cout<<"Enter Secind Number "<<"\n";
    cin>>iValue2;
    nobj.iNo2 = iValue2;

    iRet = nobj.Maximum(iValue1 , iValue2);  

    cout<<"Maximum Number is :"<<iRet<<"\n";

    return 0;
}