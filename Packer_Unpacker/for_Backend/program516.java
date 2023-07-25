import java.util.*;
import java.io.*;

class program516
{
    public static void main(String Arg[]) throws Exception
    {
        byte Buffer[] = new byte[1024];
        int iRet = 0 ,   PackedCount = 0 ;;
        boolean bRet = false;
        Scanner sobj = new Scanner(System.in);

        System.out.println("................Marvellous Packer ............");
        System.out.println("Packing Activity of the Application is Started");
        System.out.println("Enter the Name of Folder which contains the Files that you want to pack");
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

            System.out.println("Packed File gets Succesfully Created in your Current Directory");

            FileOutputStream outobj = new FileOutputStream(Packobj);
                bRet = fobj.isDirectory();
            if (bRet == true)
            {
                File list[] = fobj.listFiles();

            System.out.println("Total Number of Files Found in the Directory are : "+list.length);

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

                    FileInputStream inobj = new FileInputStream(list[i]);

                    //loop to Write a data
                    while ((iRet = inobj.read(Buffer)) != -1)
                    {
                        outobj.write(Buffer , 0 , iRet);
                    }

                    System.out.println("File Succesfully Packed with Name : " + list[i].getName());
                    
                    inobj.close();
                    PackedCount++;
                }
            }
            System.out.println("-------------------Packing Summary-------------------");
            System.out.println("Total Number of Files Scanned :  "+ list.length);
            System.out.println("Total Number of Files Packed :  "+PackedCount );
            System.out.println(" ..... Thank you for Using Marvellous Packer UnPacker ...  " );

          }
        }
        catch(Exception iobj)
        {
        System.out.println("Exception Occured");
        }
       
    }
    
}