import java.util.*;

class Student
{
    public int Rno;
    public String Name ; 
    public int Age ; 
    public int Marks;

    public static int Generator;
    
    static
    {
        Generator = 0 ;
    }

    public Student ( String str , int X , int Y)
    {
        this.Rno = ++Generator;
        this.Name = str;
        this.Age = X;
        this.Marks = Y;
    }

    public void Display()
    {
        System.out.println(this.Rno + " " + this.Name + " " + this.Age + " " + this.Marks);
    }
}

class DBMS
{
    public LinkedList <Student> lobj;

    public DBMS()
    {
        lobj = new  LinkedList <Student>();
    }

    public void StartDBMS()
    {
        System.out.println("\nMarvellous DBMS Started Succesfully");
        System.out.println("Table schema created Susscesfully");
        //  Logic
    }

//  Insert into table student values(____ , _____ ,____);
    public void InsertIntoTable(String name , int age, int marks)
    {
        Student sobj = new Student(name , age , marks);
        lobj.add(sobj);
    }

    // Select * From Student
    public void SelectFrom()
    {
        System.out.println("Records From student databases are: ");
        for (Student sref : lobj)
        {
            sref.Display();
        }
    }
}
 

class program528
{
    public static void main(String Arg[])
    {
        DBMS obj = new DBMS();
        obj.StartDBMS();
        
        obj.InsertIntoTable("Kdak" , 23 , 89);
        obj.InsertIntoTable("Roshan" , 24 , 85);
        obj.InsertIntoTable("Shantanu" , 25 , 100);
        obj.InsertIntoTable("Kalyani" , 56 , 100);
        obj.InsertIntoTable("Anurag" , 78 , 89);
    
        obj.SelectFrom();
    }
}