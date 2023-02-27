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

        Scanner sobj = new Scanner(System.in);
        String Query = " ";
        int QuerySize = 0;

        while(true)
        {
            System.out.print("Marvellous DBMS : > ");
            Query = sobj.nextLine();

            String Tokens[] = Query.split(" ");

            QuerySize = Tokens.length;

            if(QuerySize == 1)
            {
                if(Tokens[0].equals("help"))
                {
                    System.out.println("This application is used to demonstrate the features of customised DBMS");
                    System.out.println("Insert the data in student table");
                    System.out.println("Display all data : Select * from student");
                    System.out.println("Insert new recored : insert into student values Name marks");
                    System.out.println("Terminate the project : exit");
                    // Add more
                }
                else if("exit".equals(Tokens[0]))
                {
                    System.out.println("Thanks you for using our customised DBMS");
                    break;
                }
                else
                {
                    System.out.println("Invalid command");
                }
            }
            else if(QuerySize == 2)
            {

            }
            else if(QuerySize == 3)
            {

            }
            else if(QuerySize == 4)
            {
                // if("select".equals(Tokens[0]))
                // {
                //     if("*".equals(Tokens[1]))
                //     {
                //         DisplayAll();
                //     }
                // }

                if("select * from student".equals(Query))
                {
                    DisplayAll();
                }
            }
            else if(QuerySize == 6)
            {
                if("insert".equals(Tokens[0]))
                {
                    if("student".equals(Tokens[2]))
                    {
                        Insert(Tokens[4],Integer.parseInt(Tokens[5]));
                    }
                }
            }
            else
            {
                System.out.println("Invalid Query.");
            }
        }// end of while
    }// End of DBMS

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

    // Select * from user where Rollno = 3
    public void DisplaySpecific(int Value)
    {
        for(Student sref : lobj)
        {
            if(sref.Rollno == Value)
            {
                sref.Display();
                break;
            }
        }
    }

    // select * from student where Name = 'Rutuja';
    public void DisplaySpecific(String str)
    {
        for(Student sref : lobj)
        {
            if(str.equals(sref.Sname))
            {
                sref.Display();
                break;
            }
        }
    }

    // delete from Student where Rollno = 3;
    public void Delete(int no)
    {
        int index = 0;

        for(Student sref : lobj)
        {
            if(sref.Rollno == no)
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    // delete from Student where Sname = 'Ram';
    public void Delete(String str)
    {
        int index = 0;
        for(Student sref : lobj)
        {
            if(str.equals(sref.Sname))
            {
                lobj.remove(index);
                break;
            }
            index++;
        }
    }

    public void Sum()
    {
        int iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + (sref.Marks);
        }
        System.out.println("Summation of marks : "+iSum);
    }

    public void Avarage()
    {
        int iSum = 0;

        for(Student sref : lobj)
        {
            iSum = iSum + (sref.Marks);
        }
        System.out.println("Average of marks is : "+(iSum / lobj.size()));
    }

    public void Max()
    {
        int iMax = 0;

        for(Student sref : lobj)
        {
            if(iMax < sref.Marks)
            {
                iMax = sref.Marks;
            }
        }
        System.out.println("Maximum marks are: "+iMax);
    }

    public void Min()
    {
        Student s = lobj.get(0);
        int iMin = s.Marks;

        for(Student sref : lobj)
        {
            if(iMin > sref.Marks)
            {
                iMin = sref.Marks;
            }
        }
        System.out.println("Minimum marks are: "+iMin);
    }
}

class Program431
{
    public static void main(String argv[])
    {
        DBMS dobj = new DBMS();

        dobj.StartDBMS();

        
    }
}