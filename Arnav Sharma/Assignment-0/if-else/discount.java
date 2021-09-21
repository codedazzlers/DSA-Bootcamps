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