package com.array;
import java.util.Scanner;

public class even_odd {

        public static void main(String[] args) {
            int n;
            System.out.println("Enter the elements");
            Scanner sc = new Scanner(System.in);
            n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int count_odd = 0, count_even = 0;

            for (int i = 0; i < n; i++) {
                if ((arr[i] & 1) == 1)
                    count_odd++;
                else
                    count_even++;
            }
            System.out.println("Odd:" + count_odd);
            System.out.println("Even: " + count_even);

        }
}
