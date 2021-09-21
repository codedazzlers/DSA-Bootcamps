import java.util.Scanner;

public class bonus{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your salary ");
        int salary = sc.nextInt();
        System.out.print("Enter years of service : ");
        int years = sc.nextInt();
        if(years > 5)
            System.out.println("your bonus is "+0.05*salary+" total salary " +(salary+(0.05*salary)));
        else
            System.out.println("no bonus");
        sc.close();
    }
}