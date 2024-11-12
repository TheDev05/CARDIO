class Student
{
   int marks;
   static String Name;

   public void setMarks(int marks)
   {
       this.marks = marks;
   }
}

public class Practice
{
    public static void main(String args[])
    {
        Student std = new Student();
        std.setMarks(10);

        Student.Name = "Shyam";
        System.out.println(Student.Name);

        // Array
        int num[] = {1, 2, 3};
        int num1[] = new int[5];

        num1[0] = 4;
        for(int x : num1) System.out.println(x);

        for(int x: num) System.out.println(x);

    }
}