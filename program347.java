// Approach 2;

import java.util.*;
import java.util.Scanner;

// ///////////// MAIN Class/////////////////////

class program347
{

    public static  void  main ( String args[] )
    {
           Scanner sobj = new Scanner (System.in);

        System.out.println("Enter The Size of Array ");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray (iSize);   
        mobj.Accept();
        mobj.Display();
        System.out.println("Summation of Al Elements is : " + mobj.Summation());
    }
}

// / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / / /  / / / / / / / //////////////////////////
//  hELPER Class / / / / / / / / / / / / / / / / / / / / / / / / / / / /
class ArrayX
{

    public int Arr[];

    public ArrayX ( int iSize)
    {
        Arr = new int [iSize];
    }
    
    public void Accept()
    {
           Scanner sobj = new Scanner (System.in);
           for (int iCnt = 0; iCnt < Arr.length ; iCnt ++)
           {
            Arr[iCnt] = sobj.nextInt();
           }
    }

    public void Display()
    {
            System.out.println("Elements of Array Are .. \n" );
           for (int iCnt = 0; iCnt < Arr.length ; iCnt ++)
           {
            System.out.print(Arr[iCnt] + "\t" );
           }
            System.out.println ();
    }


}
// LOGIC CLASS //////////////////////////

class MyArray extends ArrayX
{
    public MyArray ( int iSize)
    {
        super ( iSize );
    }

    public int Summation()
    {
        int iSum = 0 ;
        for ( int iCnt = 0 ;iCnt < Arr.length ; iCnt++)
        {
            iSum += Arr[iCnt];
        }
        return iSum ;
    }
}