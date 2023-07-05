// Approach Uses Acces SpeciFiers;

import java.util.*;
import java.util.Scanner;

// ///////////// MAIN Class/////////////////////

class program354
{

    public static  void  main ( String args[] )
    {
        Scanner sc = new Scanner (System.in);
    
        System.out.print("Enter Full Name : ");
        String name = sc.nextLine();

        StringX sobj = new StringX();
        System.out.println("Count of Small Character is : " + sobj.CountSmall(name));
        System.out.println("Count of Capital  Character is : " + sobj.CountCapital(name));
    }
}


// Hepler Class //////////////////////////////////////////////////
////////////////////////////////////////

class StringX
{
    public int  CountSmall (String str)
    {
        int iCount = 0;
        char cArray [] = str.toCharArray();

        for ( int iCnt = 0 ; iCnt < cArray.length ; iCnt ++)
        {
            if ( cArray [iCnt] >= 'a' && cArray [iCnt] <= 'z')
            {
                iCount++;
            }
        } 
        return iCount;
    }

    public int CountCapital ( String str)
    {
        int iCount = 0;
        char cArray [] = str.toCharArray();

        for ( int iCnt =  0 ; iCnt < cArray.length ; iCnt ++)
        {
            if ( cArray [iCnt] >= 'A' && cArray [iCnt] <= 'Z')
            {
                iCount++;
            }
        } 
        return iCount;
    }
}