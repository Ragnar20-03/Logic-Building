
import java.util.Scanner;

class program369
{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner (System.in);  

        System.out.println("Enter String : ");
        String str = sc.nextLine();

        str = str.replaceAll("//s+","");
        str = str.trim();

        int iFrequency  = 0 ;

        for ( int iCnt = 0 ; iCnt <  str.length(); iCnt++)
        {
            if ( str.charAt(iCnt) == ' ')
            {
                iFrequency ++;
            }
        }

        System.out.println("Number of Words are : "+ (iFrequency +1));
    }
} 