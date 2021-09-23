// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.
import java.util.Scanner;

public class discount {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter quantity : ");
        int q = sc.nextInt();

        if ((q * 100) > 1000) {
            System.out.println("discount "+(.1*q*100)+"total cost "+(q*100-(.1*q*100)));
        }
        else {
            System.out.println("no discount");
        }
        sc.close();
    }
}