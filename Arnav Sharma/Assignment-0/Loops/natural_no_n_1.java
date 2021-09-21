import java.util.Scanner;

public class natural_no_n_1 {

    public static void main(String[] args)
    {
        int n;
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a Number: ");
        n = sc.nextInt();

        while(n>=1)
        {
            System.out.print(n +"\t");
            n--;
        }
    }

}
