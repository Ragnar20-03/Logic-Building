import java.lang.*;
import java.util.*;

class program326
{
    public static void main( String arg[])
    {
        Scanner sobj = new Scanner (System.in);
        int iNo1 = sobj.nextInt();

        Scanner sobj = new Scanner (System.in);
        int iNo2 = sobj.nextInt();

        int iAns = 0 ;
        iAns = iNo1 + iNo2;
        
        System.out.println ( "Addition is : "+ iAns);
    }
}
// sudo apt install openjdk-8-jdk-headless   # version 8u372-ga~us1-0ubuntu1~22.04