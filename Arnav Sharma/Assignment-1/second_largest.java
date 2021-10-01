package com.array;
import java.util.Arrays;

public class second_largest {

        public static int sec(int[] a, int total){
            Arrays.sort(a);
            return a[total-2];
        }
        public static void main(String args[]){
            int a[]={1,8,5,6,19,2};
            System.out.println("Second Largest: "+sec(a,6));

        }
}
