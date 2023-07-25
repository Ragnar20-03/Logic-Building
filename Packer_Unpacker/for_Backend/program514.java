import java.util.*;
import java.io.*;


class program514
{
    public static void main(String Arg[]) throws Exception
    {
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Folder Name that you want to create\n");
        String FolderName = sobj.nextLine();

        File fobj = new File(FolderName);
        String Header = null;

        System.out.println("Enter the name of Packed File that you want to Create");
        String PackFile = sobj.nextLine();

        try
        {

        File Packobj = new File(PackFile);
        bRet = Packobj.createNewFile();
        if ( bRet == false)
        {
            System.out.println("Unable to Create Packet File");
            return ;
        }

            FileOutputStream outobj = new FileOutputStream(Packobj);

            if (fobj.isDirectory())
            {
                File list[] = fobj.listFiles();


            for (int i = 0 ; i < list.length ; i++)
            {
                if (( list[i].getName()).endsWith(".txt") )
                {
                    Header = list[i].getName() + " "+ list[i].length();

                    for (int j = Header.length() ; j< 100 ; j++)
                    {
                        Header = Header + " ";
                    }
                    byte bHeader[] = Header.getBytes();

                    outobj.write(bHeader , 0 , bHeader.length); 
                }
            }

            }
        }
        catch(Exception iobj)
        {
        System.out.println("Exception Occured");
        }
       
    }
    
}