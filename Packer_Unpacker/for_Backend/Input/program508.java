import java.util.*;
import java.io.*;


class program508
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Folder Name that you want to create\n");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        try
        {
            if (fobj.isDirectory())
            {
                System.out.println("Its a Directory");
            }
            else 
            {
                System.out.println("Its Not a Directory");
            }
        }
        catch(Exception iobj)
        {
        System.out.println("Exception Occured");
        }
       
    }
    
}