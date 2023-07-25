import java.util.*;
import java.io.*;

class program521
{
    public static void main(String Arg[]) throws Exception
    {

        Scanner sobj = new Scanner(System.in);
        byte Header [ ] = new byte [100];     
        String HeaderStr ;
        String Tokens[];
        int iRet = 0 ;

        System.out.println("................Marvellous Packer ............");
        System.out.println("Packing Activity of the Application is Started");

        System.out.println("Emter the File name which Contains the packed data");
        String PackFile = sobj.nextLine();
        File Packobj = new File(PackFile);
        try 
        {
            FileInputStream inobj = new FileInputStream (Packobj);


            while ((iRet = inobj.read(Header , 0 , 100))!= 0 );
            {
                HeaderStr = new String(Header);

            System.out.println(HeaderStr);

  
            Tokens = HeaderStr.split(" ");

            File newfileobj = new File(Tokens[0]);
            newfileobj.createNewFile();

            FileOutputStream outobj = new FileOutputStream (newfileobj);
            
            byte Buffer[] = new byte [ Integer.parseInt(Tokens[1])];
            inobj.read(Buffer,0,Integer.parseInt(Tokens[1]));

            outobj.write(Buffer,0,Integer.parseInt(Tokens[1]));
            
            }


        }
        catch(Exception obj)
        {
            System.out.println("ExceptionX Occured : "+obj);
        }
            
    }
    
}