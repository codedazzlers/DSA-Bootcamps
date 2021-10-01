package com.array;

public class copy {
        public static void main(String[] args)
        {
            int a[] = { 2, 7, 4, 5 };

            int b[] = a.clone();

            b[0]++;

            System.out.println("Contents of 1st array");
            for (int i = 0; i < a.length; i++)
                System.out.print(a[i] + " ");

            System.out.println("\nContents of 2nd array");
            for (int i = 0; i < b.length; i++)
                System.out.print(b[i] + " ");
    }
}
