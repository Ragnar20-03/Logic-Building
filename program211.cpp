/*
    iRow = 4 ;
    iCol = 4;
*/

#include<iostream>

using namespace std;

class Pattern 
{
    public:
    int iRow;
    int iCol;

    Pattern( int x, int y){
        iRow = x;
        iCol = y;   
    }

    void Display()
    {
        int i = 0;
        int j = 0;

        for(i = 1 ; i <= iRow; i++)
        {
            for (j=1; j <= iCol; j++)
            {
                cout<<"*"<<"\t";
            }
            cout<<"\n";
        }

    }

};
int main()
{
    int iValue1 = 0; 
     int iValue2 = 0;

     cout << "Enter Number of Rows And Colums : \n";
     cin>>iValue1>>iValue2;

     Pattern pobj (iValue1 , iValue2);

     pobj.Display();
 
    return 0;
}