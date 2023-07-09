
    
import java.util.Scanner;

class program373
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

        for ( String s : arr)
        {
            if (s.equals("India"))
            {
                iCount ++;
            }
        }

        System.out.println( " Count is : " + iCount);
    }
} 

