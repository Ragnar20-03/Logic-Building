
    // anagrams 

//  str1 : mARVELLOUS 
//  STR2 : osulMalver
    
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

        int Freq[] = new int [26];

        int iCnt = 0 ;

        for ( iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            Freq [Arr[iCnt] - 'a']++;
            Freq [Brr[iCnt] - 'a']--;

        }


        for ( iCnt = 0 ; iCnt < Freq.length ; iCnt++)
        {
            if ( Freq [iCnt] != 0)
            {
                break;
            }
        }
        if ( iCnt == Arr.length)
        {
            System.out.println("Strings Are  Anagram ");
        }
        else
        {
            System.out.println("Strings Are not Anagram ");
        }
        
    }
} 

