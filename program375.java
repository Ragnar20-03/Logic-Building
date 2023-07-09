
    
import java.util.Scanner;

class program375
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

        System.out.println( " Enter word that you want to seearch");

        String Word = sc.nextLine();

        for ( String s : arr)
        {
            if (s.equals(Word))
            {
                iCount ++;
            }
        }

        System.out.println( " Count is : " + iCount);
    }
} 

