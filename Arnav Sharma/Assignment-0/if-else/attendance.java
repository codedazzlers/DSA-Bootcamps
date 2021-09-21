import java.util.Scanner;

public class attendance {
        public static void main(String args[])
        {
            Scanner sc=new Scanner(System.in);
            System.out.println("no of classes held");
            int x=sc.nextInt();
            System.out.println("no of classes attend");
            int y=sc.nextInt();
            float pf;
            pf=((y*100)/x);
            System.out.println(pf);
            if(pf>=75)
                System.out.println("eligible:"+ pf);
            else
                System.out.println(" not eligible:"+ pf);
            
            sc.close();
        }
    }
