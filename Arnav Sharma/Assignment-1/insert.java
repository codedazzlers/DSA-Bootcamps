package com.array;
import java.io.*;
import java.lang.*;
import java.util.*;

public class insert {
    
        public static int[] insertX(int n, int arr[], int x, int pos)
        {
            int i;
            int newarr[] = new int[n + 1];

            for (i = 0; i < n + 1; i++) {
                if (i < pos - 1)
                    newarr[i] = arr[i];
                else if (i == pos - 1)
                    newarr[i] = x;
                else
                    newarr[i] = arr[i - 1];
            }
            return newarr;
        }

        public static void main(String[] args)
        {

            int n = 5;

            int arr[]
                    = { 2, 5, 7, 3, 9 };

            System.out.println("Initial Array:\n"
                    + Arrays.toString(arr));

            int x = 10;
            int pos = 2;

            arr = insertX(n, arr, x, pos);

            System.out.println("\nArray with " + x
                    + " inserted at position "
                    + pos + ":\n"
                    + Arrays.toString(arr));
    }
}
