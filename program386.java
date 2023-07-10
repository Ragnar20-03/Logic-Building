
    // anagrams 

//  str1 : mARVELLOUS           Army
//  STR2 : osulMalver           Mary
    
import java.util.Scanner;

class program385
{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner (System.in);  

        System.out.println("Enter String : ");
        String str1 = sc.nextLine();   

        System.out.println("Enter String : ");
        String str2 = sc.nextLine();

        if (str1.length() != str2.length())
        {
            System.out.println("Not Anagram");
            return ;
        }

        str1 = str1.toLowerCase();
        str2 = str2.toLowerCase();

        char Arr[] = str1.toCharArray();
        char Brr[] = str2.toCharArray();

        Arrays.sort(Arr);
        Arrays.sort(Brr);

        if (Arrays.equals(Arr , Brr))
        {
            System.out.println("Strings are Anagram ");
        }
        else
        {
         System.out.println("Strings are Not Anagram ");
        }
    }
} 

