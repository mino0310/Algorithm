package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;

public class BinarySearch {

    static int mySearch(int[] arr, int num) {
        int index = 0, lt = 0, rt = arr.length - 1;
        int midIdx = arr.length / 2;
        int mid;

        while (lt <= rt) {
            midIdx = (lt + rt) / 2;
            mid = arr[midIdx];
            if (mid < num) {
                lt = midIdx + 1;
            } else if (mid > num) {
                rt = midIdx - 1;
            } else {
                index = midIdx;
            }
        }
        return index;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] array = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int numOfArr = array[0];
        int numToSearch = array[1];
        int[] numbers = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        Arrays.sort(numbers);

        int i = Arrays.binarySearch(numbers, numToSearch);
        System.out.println(i+1);

        int i1 = mySearch(numbers, numToSearch);
        System.out.println(i1+1);
    }


}
