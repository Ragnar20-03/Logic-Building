#include<iostream>

using namespace std;

class Number {

    public:

    int iNo1 ; 
    int iNo2 ;

    public :

    void Accept()
    {
        cout<<"Enter First Number"<<"\n";
        cin >>iNo1;

        cout<<"Enter Secind Number "<<"\n";
        cin>>iNo2;
    }
    
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

    nobj.Accept();

    int iRet = 0;

    iRet = nobj.Maximum();  

    cout<<"Maximum Number is :"<<iRet<<"\n";

    return 0;
}