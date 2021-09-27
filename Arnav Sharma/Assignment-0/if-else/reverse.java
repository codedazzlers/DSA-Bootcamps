import java.util.Scanner;

public class reverse {

        public static void main(String[] args) {

            Scanner s = new Scanner(System.in);

            System.out.println("Enter number");

            int x = s.nextInt ();

            int first_digit = x%10;

            int second_digit = (x/10) %10;

            int third_digit = (x/100) %10;

            int fourth_digit = (x/1000) %10;

            int new_number= (first_digit*1000)+(second_digit*100)+(third_digit*10)+(fourth_digit*1);

            System.out.println(new_number);

            s.close();

        }

    }

