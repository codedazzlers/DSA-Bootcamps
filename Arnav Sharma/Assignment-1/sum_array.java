package com.array;

import java.util.Scanner;

public class sum_array {
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
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum = sum + arr[i];
        }
        System.out.println("Sum of elements of an array: " + sum);
    }
}

