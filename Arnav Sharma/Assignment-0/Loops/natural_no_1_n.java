import java.util.Scanner;

public class natural_no_1_n {

        public static void main(String[] args)
        {
            int number, i = 1;
            Scanner sc = new Scanner(System.in);

            System.out.print("Enter a Number: ");
            number = sc.nextInt();

            while(i <= number)
            {
                System.out.print(i +"\t");
                i++;
            }
            sc.close();
        }
}