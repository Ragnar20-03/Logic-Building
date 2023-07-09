
    
import java.util.Scanner;

class program381
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
            StringBuffer sb = new StringBuffer (arr[iCnt]);
            output.append(sb.append(" "));
        }
        System.out.println(output);
        
    } 
}
