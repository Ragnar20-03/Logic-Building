import java.util.*;
import java.io.*;

class program516
{
    public static void main(String Arg[]) throws Exception
    {

        Scanner sobj = new Scanner(System.in);

        System.out.println("................Marvellous Packer ............");
        System.out.println("Packing Activity of the Application is Started");

        System.out.println("Emter the File name which Contains the packed data");
        String PackFile = sobj.nextLine();

        File Packobj = new File(PackFile);

        FileInputStream inobj = new FileInputStream (Packobj);
    
    }
    
}