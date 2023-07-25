import java.util.*;
import java.io.*;


class program505
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the File Name that you want to create\n");
        String FileName = sobj.nextLine();

        try
        {
        File fobj = new File(FileName);
        
        
        boolean bRet = fobj.exists();
        if(bRet)
        {
            System.out.println("File Existing");
        }
        else 
        {
            System.out.println("No Such File  \n");
        }
        }
        catch(Exception iobj)
        {
        System.out.println("Exception Occured");
        }
       
    }
    
}