import java.util.*;

class Student
{
    public String Sname;
    public int Marks;
    public int Rollno;

    public static int Generator;

    static 
    {
        Generator = 0;
    }

    public Student(String str, int no)
    {
        this.Sname = str;
        this.Marks = no;
        Generator++;
        this.Rollno = Generator;
    }
    public void Display()
    {
        System.out.println("Rollno :"+Rollno+" Name : "+Sname+" Marks : "+Marks);
    }
}

class DBMS
{
    public LinkedList <Student> lobj;

    public DBMS()
    {
        lobj = new LinkedList();
    }

    public void StartDBMS()
    {
        System.out.println("Marvellous customised DBMS started succesfully...");
    }

    // All SQL queries should be implemented here

    // insert into student values(_____,______);
    public void Insert(String str,int no)
    {
        Student sobj = new Student(str,no);
        lobj.add(sobj);
    }

    // Select * from Student;
    public void DisplayAll()
    {

        for(Student sref : lobj)
        {
            sref.Display();
        }
    }

}

class Program428
{
    public static void main(String argv[])
    {
        DBMS dobj = new DBMS();

        dobj.StartDBMS();

        dobj.Insert("Kartik",90);
        dobj.Insert("Rutuja",96);
        dobj.Insert("Ankit",80);
        dobj.Insert("Pooja",67);
        dobj.Insert("Rem",77);

        dobj.DisplayAll();
        
    }
}