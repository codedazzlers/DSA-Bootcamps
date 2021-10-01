package com.array;

public class delete_duplicate {
    public static void main(String[] args)
    {
        int a[] = { 5, 2, 6, 8, 6, 7, 5, 2, 8 };
        int n = a.length;

        int m = 0;

        for (int i = 0; i < n; i++) {
            m = Math.max(m, a[i]);
        }

        int[] f = new int[m + 1];

        for (int i = 0; i < m + 1; i++) {
            f[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            f[a[i]]++;
        }

        for (int i = 0; i < m + 1; i++)
        {
            if (f[i] > 0) {
                System.out.print(i + " ");
            }
        }
    }
}

