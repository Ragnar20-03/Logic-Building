// Approach Uses Acces SpeciFiers;

import java.util.*;
import java.util.Scanner;

// ///////////// MAIN Class/////////////////////

class program352
{

    public static  void  main ( String args[] )
    {
        Scanner sobj = new Scanner (System.in);
    
        System.out.print("Enter Full Name : ");
        String name = sobj.nextLine();
        System.out.println("Enter Full Name is  : " +name );
        System.out.println("Length of String is   : " +name.length() );
    
        char str [] = name.toCharArray();
    
    
        for ( int iCnt = 0 ; iCnt < name.length() ; iCnt ++)
        {
            System.out.println( str[iCnt]);
        }
    }
}
