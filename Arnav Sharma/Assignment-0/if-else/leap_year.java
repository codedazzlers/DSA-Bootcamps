import java.util.Scanner;

public class leap_year {

        public static void main(String[] args) {

            int year;
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter any Year:");
            year = sc.nextInt();
            sc.close();
            boolean isLeap = false;

            if(year % 4 == 0)
            {
                if( year % 100 == 0)
                {
                    if ( year % 400 == 0)
                        isLeap = true;
                    else
                        isLeap = false;
                }
                else
                    isLeap = true;
            }
            else {
                isLeap = false;
            }

            if(isLeap==true)
                System.out.println(year + " is a Leap Year.");
            else
                System.out.println(year + " is not a Leap Year.");
        }
    }

