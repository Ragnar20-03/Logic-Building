import java.util.*;
import java.io.*;


class program507
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the File Name that you want to create\n");
        String FileName = sobj.nextLine();

        try
        {
        File fobj = new File(FileName);

        System.out.println("File Length is  "+ fobj.length());
        }
        catch(Exception iobj)
        {
        System.out.println("Exception Occured");
        }
       
    }
    
}