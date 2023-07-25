import java.util.*;
import java.io.*;

class program518
{
    public static void main(String Arg[]) throws Exception
    {

        Scanner sobj = new Scanner(System.in);
        byte Header [ ] = new byte [100];        

        System.out.println("................Marvellous Packer ............");
        System.out.println("Packing Activity of the Application is Started");

        System.out.println("Emter the File name which Contains the packed data");
        try 
        {
            String PackFile = sobj.nextLine();

            File Packobj = new File(PackFile);

            FileInputStream inobj = new FileInputStream (Packobj);

            inobj.read(Header , 0 , 100);
            String HeaderStr = new String(Header);

            System.out.println(HeaderStr);

            String Tokens[];
            Tokens = HeaderStr.split(" ");

            System.out.println("FileName is : "+Tokens [0]);
            System.out.println("FileSize is : "+Tokens [1]);

        }
        catch(Exception obj)
        {
            System.out.println("ExceptionX Occured : "+obj);
        }
            
    }
    
}