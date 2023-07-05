// Approach Using CharAtMethod();
//  strLower ; 
// StrUpper;
// strToggle;

import java.util.*;
import java.util.Scanner;

// ///////////// MAIN Class/////////////////////

class program359
{

    public static  void  main ( String args[] )
    {
        Scanner sc = new Scanner (System.in);
    
        System.out.print("Enter Full Name : ");
        String name = sc.nextLine();

        StringX sobj = new StringX();

        System.out.println("Small String is : " + sobj.strLower(name));
        System.out.println("Capital String is : " + sobj.strUpper(name));
        System.out.println("ToggleD String is : " + sobj.strToggle(name));
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
            return new String(cArray); 
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

            return new String(cArray); 

     }    

    public String strToggle ( String str)
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
            else if ( cArray [ iCnt] >= 'A' && cArray [ iCnt] <= 'Z' )
            {
                cArray [iCnt] = (char)(cArray [iCnt] + 32);
            }
        }

            return new String(cArray); 

     }         
}