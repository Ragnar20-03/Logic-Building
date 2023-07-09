
    
import java.util.Scanner;

class program379
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
        for(String s : arr)
        {
            StringBuffer Word  = new StringBuffer(s);
            output.append((Word.reverse()).append(" "));
            // output.append((Word.reverse())+" ");

        }

        String result = new String(output);
        result = result.trim();
        
        System.out.println("Result is  : " + result);
    } 
}
