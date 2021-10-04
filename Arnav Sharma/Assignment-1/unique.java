package com.array;

public class unique {
    public static void main (String[] args)
    {
        int arr[] = { 10, 3, 5, 3, 9, 22, 4, 3, 1, 5, 6 };

        int len = arr.length;

        int[] newArr = new int[20];

        int index = 0;
        for (int i = 0; i < len; i++)
        {
            int flag = 0;
            for (int j = 0; j < i; j++){
                if (arr[i] == arr[j]){
                    flag = 1;
                    break;
                }
            }

            if (flag == 0){
                newArr[index] = arr[i];
                index++;
            }
        }
        for(int i = 0; i < index; i++)
            System.out.print( newArr[i] + " ");
    }
}
