package com.array;
import java.util.Scanner;

public class negative_array {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the no of elements");
        n = sc.nextInt();

        int[] arr = new  int[15];
        System.out.println("Enter the elements");
        for (int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println("Negative elements are: ");
        {
            for(int i=0;i<n;i++){
                if(arr[i]<0)
                    System.out.println(arr[i]);
            }
        }
    }
}
