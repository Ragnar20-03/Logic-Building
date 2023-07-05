// String Reverse

import java.util.*;
import java.util.Scanner;

// ///////////// MAIN Class/////////////////////

class program363
{

    public static  void  main ( String args[] )
    {
        Scanner sc = new Scanner (System.in);
    
        System.out.print("Enter Full Name : ");
        String name = sc.nextLine();

        StringX sobj = new StringX();

        System.out.println("Result String is : " + sobj.Reverse(name));
    }
}


// Hepler Class //////////////////////////////////////////////////
////////////////////////////////////////

class StringX
{     
     public String Reverse ( String str)
     {
        char Arr [] = str.toCharArray();

        int iStart = 0 ;
        int iEnd = Arr.length - 1 ; 

        char cTemp = ' ';
        while ( iStart < iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart ++;
            iEnd --;
        }     

        return new String (Arr);   
     }       
}