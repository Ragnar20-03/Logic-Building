// Approach 1;

import java.util.*;
import java.util.Scanner;

class program343
{

    public static  void  main ( String args[] )
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Size of Array ");
        int iSize = sobj.nextInt();

        int Arr [ ] = new int [ iSize];

        for ( int iCnt = 0; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of Array Are : \n");

        for ( int iCnt = 0; iCnt < iSize ; iCnt++)
        {
            System.out.print("\t"+Arr[iCnt] );
        
        }

        sobj.close();
    }
}