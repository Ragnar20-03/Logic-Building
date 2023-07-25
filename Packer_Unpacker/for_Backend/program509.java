import java.util.*;
import java.io.*;


class program509
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
                File list[] = fobj.listFiles();
            System.out.println("Number of Files in that Directory are :" + list.length);

            }
        }
        catch(Exception iobj)
        {
        System.out.println("Exception Occured");
        }
       
    }
    
}