import java.util.*;
import java.io.*;


class program504
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the File Name that you want to create\n");
        String FileName = sobj.nextLine();

        try
        {
        File fobj = new File(FileName);
        
        boolean bRet = fobj.createNewFile();
        if(bRet)
        {
            System.out.println("File Succesfully Created");
        }
        else 
        {
            System.out.println("Unable to Create File \n");
        }
        }
        catch(IOException iobj)
        {
        System.out.println("Exception Occured");
        }
       
    }
    
}