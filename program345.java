// Approach 2;

import java.util.*;
import java.util.Scanner;

class program344  
{

    public static  void  main ( String args[] )
    {
           Scanner sobj = new Scanner (System.in);

        System.out.println("Enter The Size of Array ");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX (iSize);   
        aobj.Accept();
        aobj.Display();

    }
}

class ArrayX
{

    private int Arr[];

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
            System.out.println( );

    }

}