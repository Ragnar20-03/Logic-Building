// Approach Using CharAtMethod();
//  strLower ; 
// StrUpper;

import java.util.*;
import java.util.Scanner;

// ///////////// MAIN Class/////////////////////

class program357
{

    public static  void  main ( String args[] )
    {
        Scanner sc = new Scanner (System.in);
    
        System.out.print("Enter Full Name : ");
        String name = sc.nextLine();

        StringX sobj = new StringX();

        System.out.println("Converted String is : " + sobj.strLower(name));
    }
}


// Hepler Class //////////////////////////////////////////////////
////////////////////////////////////////

class StringX
{   
     public String strLower ( String str)
     {
        char cArray[] = str.toCharArray();

        for ( int iCnt = 0 ; iCnt < cArray.length ; iCnt++)
        {
            if ( cArray [ iCnt] >= 'A' && cArray [ iCnt] <= 'Z' )
            {
                // cArray [ iCnt] = cArray [iCnt] + 32;
                //Error
                cArray [iCnt] = (char)(cArray [iCnt] + 32);
                // cArray [iCnt] += 32; 
            }
        }
         String ret = new String ( cArray);

         return ret;
     }  
     
    public String strUpper ( String str)
     {
        char cArray[] = str.toCharArray();

        for ( int iCnt = 0 ; iCnt < cArray.length ; iCnt++)
        {
            if ( cArray [ iCnt] >= 'a' && cArray [ iCnt] <= 'z' )
            {
                // cArray [ iCnt] = cArray [iCnt] - 32;
                //Error
                cArray [iCnt] = (char)(cArray [iCnt] - 32);
                // cArray [iCnt] -= 32; 
            }
        }
         String ret = new String ( cArray);

         return ret;
     }    
}