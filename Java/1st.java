class data
{
    public int sum(int num1, int num2)
    {
        return num1 + num2;
    }
}

class java
{
    public static void main(String[] args)
    {
        long data = 1505;
        System.out.print("value: " + data);

        String day = "Sunday";
        int result = switch (day)
        {
            case "Monday" -> 30;
            case "Sunday" -> 50;
            default -> 40;
        };

        System.out.println(result);

        data obj = new data();
        int sum = obj.sum(2, 4);

        System.out.println(sum);

        String text = "Good Morning";
        text = "Ankit";
        System.out.println(text);

    }
}