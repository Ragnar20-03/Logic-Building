import java.util.*;
import java.io.*;


class program506
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the File Name that you want to create\n");
        String FileName = sobj.nextLine();

        try
        {
        File fobj = new File(FileName);
            String Name = fobj.getName();

            System.out.println("File Name is "+ Name);
        }
        catch(Exception iobj)
        {
        System.out.println("Exception Occured");
        }
       
    }
    
}