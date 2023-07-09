
    
import java.util.Scanner;

class program376
{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner (System.in);  

        System.out.println("Enter String : ");
        String str = sc.nextLine();

        str = str.replaceAll("//s+","");
        str = str.trim();

        int iCount = 0 ;

        String arr[] = str.split(" ");

        int iMax = 0 ;
        int iPos = 0 ;

        for ( int iCnt = 0  ; iCnt < arr.length ; iCnt ++)
        {
            if ( arr[iCnt].length() > iMax )
            {
                iMax = arr[iCnt].length();
                iPos = iCnt;
            }
        }

        System.out.println( " Largest Word is : " +arr[iPos] + " with length " + iMax);
    }
} 

