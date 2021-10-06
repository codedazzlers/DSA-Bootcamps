package com.array;

public class count_duplicates {
    public static void main(String[] args) {

        int i = 0, j, count = 0;
        int[] arr = {10, 15, 25, 10, 8, 12, 10, 15, 55, 10, 60};

        while(i < arr.length)
        {
            j = i + 1;
            while(j < arr.length)
            {
                if(arr[i] == arr[j]) {
                    count++;
                    break;
                }
                j++;
            }
            i++;
        }
        System.out.println("\nThe Total Number of Duplicates  = " + count);
    }
}
