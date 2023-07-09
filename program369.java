
import java.util.Scanner;

class program369
{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner (System.in);  

        System.out.println("Enter String : ");
        String str = sc.nextLine();

        str = str.replaceAll("\\s+","");

        System.out.println("Updated String is : " + str);
       
        str = str.trim();
    }
} 