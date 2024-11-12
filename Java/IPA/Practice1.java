package Java.IPA;
import java.util.*;

public class Practice1
{
    public static void reverseNumber()
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the Number");
        int n = sc.nextInt();

        while(n > 0)
        {
            int rem = n%10;
            System.out.println(rem);
            n = n/10;
        }
    }

    public static void changeCase()
    {
        Scanner sc = new Scanner(System.in);
        sc.nextLine();

        System.out.println("Enter the text");
        String text = sc.nextLine();

        for(char ch : text.toCharArray())
        {
            char x = (Character.isLowerCase(ch)) ? Character.toUpperCase(ch) : ch;
            System.out.print(x);
        }
    }

    public static void countOccurences()
    {
        System.out.println("Enter the size of Array");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        ArrayList<Integer>num = new ArrayList<>();
        for(int i = 0; i < n; i++)
        {
            int temp = sc.nextInt();
            num.add(temp);
        }

        HashMap<Integer, Integer>data = new HashMap<>();
        for(int x : num)
        {
            if(data.containsKey(x))
            {
               data.put(x, data.get(x)+1);
            }else
                data.put(x, 1);
        }

        for(int key : data.keySet())
        {
            System.out.println(key + " : " + data.get(key));
        }

    }

    public static void main(String args[])
    {
        // countOccurences();
        changeCase();
        // reverseNumber();
    }
}