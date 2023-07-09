import java.util.Scanner;

class program364
{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner (System.in);  

        System.out.println("Enter String : ");
        String str = sc.nextLine();

        str = str.toLowerCase();

        sc.close();

        char Arr[] = str.toCharArray();
        int Freq[] = new int [26];
        int iCnt = 0 ;

        for ( iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            Freq [Arr[iCnt] - 'a']++;
        }

        System.out.println("Frequency of each letter is : ");

        for ( iCnt = 0 ; iCnt < Arr.length ; iCnt ++)
        {
            System.out.println("Frequency OF " + (char)(iCnt+'a') + " is  " +Freq[iCnt]);
        }        
    }
} 