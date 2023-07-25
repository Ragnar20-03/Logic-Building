import java.util.*;
import java.io.*;


class program511
{
    public static void main(String Arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Folder Name that you want to create\n");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        String Header = null;
        try
        {
            if (fobj.isDirectory())
            {
                File list[] = fobj.listFiles();
                System.out.println("Number of Files in that Directory are :" + list.length);

            for (int i = 0 ; i < list.length ; i++)
            {
                Header = list[i].getName() + " "+ list[i].length();
                System.out.println(Header);
            }

            }
        }
        catch(Exception iobj)
        {
        System.out.println("Exception Occured");
        }
       
    }
    
}