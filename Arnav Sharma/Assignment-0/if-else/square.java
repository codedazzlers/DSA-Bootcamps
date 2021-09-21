// Take values of length and breadth of a rectangle from user and check if it is square or not.

import java.util.Scanner;

public class square{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length : ");
        int l = sc.nextInt();
        System.out.print("Enter the breadth : ");
        int b = sc.nextInt();
        if(l == b)
            System.out.println("it's a square");
        else
            System.out.println("not a square");
        sc.close();
    }
}
