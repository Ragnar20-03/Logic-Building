
    
import java.util.Scanner;

class program380
{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner (System.in);  

        System.out.println("Enter String : ");
        String str = sc.nextLine();

        str = str.replaceAll("//s+","");
        str = str.trim();


        String arr[] = str.split(" ");

        StringBuffer output = new StringBuffer();

        for ( int iCnt = arr.length-1 ; iCnt >= 0 ; iCnt--)
        {
            System.out.print(arr[iCnt]+ " ");
        }

    } 
}
