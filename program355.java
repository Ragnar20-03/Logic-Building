// Approach Using CharAtMethod();

import java.util.*;
import java.util.Scanner;

// ///////////// MAIN Class/////////////////////

class program355
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

        for ( int iCnt = 0 ; iCnt < str.length() ; iCnt ++)
        {
            if ( str.charAt (iCnt) >= 'a' && str.charAt(iCnt) <= 'z')
            {
                iCount++;
            }
        } 
        return iCount;
    }



    public int CountCapital ( String str)
    {
        int iCount = 0;

        for ( int iCnt =  0 ; iCnt < str.length() ; iCnt ++)
        {
            if ( str.charAt(iCnt) >= 'A' && str.charAt(iCnt) <= 'Z')
            {
                iCount++;
            }
        } 
        return iCount;
    }
}