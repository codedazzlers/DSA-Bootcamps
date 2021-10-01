package com.array;

public class max_min {
        public static void main(String args[]){
            int arr[] = new int[]{10, 11, 88, 2, 12, 120};

            int max = getMax(arr);
            System.out.println("Maximum Value: "+max);

            int min = getMin(arr);
            System.out.println("Minimum Value: "+min);
        }

        public static int getMax(int[] inputArray){
            int maxValue = inputArray[0];
            for(int i=1;i < inputArray.length;i++){
                if(inputArray[i] > maxValue){
                    maxValue = inputArray[i];
                }
            }
            return maxValue;
        }

        public static int getMin(int[] inputArray){
            int minValue = inputArray[0];
            for(int i=1;i<inputArray.length;i++){
                if(inputArray[i] < minValue){
                    minValue = inputArray[i];
                }
            }
            return minValue;
        }
}
