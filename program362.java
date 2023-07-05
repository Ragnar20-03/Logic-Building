// Remove WhiteSpaces -> 2nd Approach

import java.util.*;
import java.util.Scanner;

// ///////////// MAIN Class/////////////////////

class program362
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
       return str.replaceAll("\\s" , "");  
     }       
}