package com.array;

public class search {
    public static int linearSearch(int[] arr, int n){
        for(int i=0;i<arr.length;i++){
            if(arr[i] == n){
                return i;
            }
        }
        return -1;
    }
    public static void main(String a[]){
        int[] a1= {10,20,30,50,70,90};
        int n = 20;
        System.out.println(n+" is found at index: "+linearSearch(a1, n));
    }
}
