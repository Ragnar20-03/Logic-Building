
import java.util.Scanner;

class Matrix
{
    public int Arr[][];

    public Matrix( int i , int j)
    {
        Arr = new int [i][j];
    } 
    public void Accept()
    {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Elements : ");

        for (int i = 0 ; i< Arr.length ; i++)
        {
            for ( int j = 0 ; j<Arr[i].length; j++)
            {
                Arr[i][j] = sc.nextInt();
            }
        }
    }

    public void Display()
    {


        System.out.println("Elements of Matrix are s : ");

        for (int i = 0 ; i< Arr.length ; i++)
        {
            for ( int j = 0 ; j<Arr[i].length; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }        
            System.out.println();

        }
    }

    public int Summation ()
    {
        int iSum = 0 ;
        for (int i = 0 ; i< Arr.length ; i++)
        {
            for ( int j = 0 ; j<Arr[i].length; j++)
            {
                iSum += Arr[i][j];
            }        
        }
        return iSum;
    }
}

class program388
{
    public static void main(String arg[])
    {
        Scanner sc = new Scanner ( System.in);
        int iRow = 0 ;
        int iCol = 0 ;
        System.out.println("Enter Number of Rows ");
        iRow = sc.nextInt();
        System.out.println("Enter Number of Coloums ");
        iCol = sc.nextInt();

        Matrix mobj = new Matrix ( iRow , iCol);

        mobj.Accept();
        mobj.Display();

        System.out.println("Additoin is : " + mobj.Summation());

        sc.close();
    }
} 

