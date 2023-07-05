// Approach Using CharAtMethod();
//  strLower ; 
// StrUpper;
// strToggle;
// Remove WhiteSpaces

import java.util.*;
import java.util.Scanner;

// ///////////// MAIN Class/////////////////////

class program360
{

    public static  void  main ( String args[] )
    {
        Scanner sc = new Scanner (System.in);
    
        System.out.print("Enter Full Name : ");
        String name = sc.nextLine();

        StringX sobj = new StringX();

        System.out.println("Result String is : " + sobj.RemoveWhiteSpace(name));
    }
}


// Hepler Class //////////////////////////////////////////////////
////////////////////////////////////////

class StringX
{     
     public String RemoveWhiteSpace ( String str)
     {
        char Arr[] = str.toCharArray();

        char Brr [] = new char[Arr.length];

        int  i = 0;
        for ( int iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            if ( Arr[iCnt] != ' ')
            {
                Brr [ i] = Arr[iCnt];
                i++;
            }
        }
        return new String (Brr);
     }       
}