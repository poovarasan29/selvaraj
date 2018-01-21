import java.util.Scanner;
public class Digit_Sum 
{
    public static void main(String args[])
    {
        int a, n, sum = 0;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number:");
        a= s.nextInt();
        while(a > 0)
        {
            n = a % 10;
            sum = sum + n;
            a = a / 10;
        }
        System.out.println("Sum of Digits:"+sum);
    }
}
