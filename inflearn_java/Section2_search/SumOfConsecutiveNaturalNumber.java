package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.stream.IntStream;

public class SumOfConsecutiveNaturalNumber {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(br.readLine());
        int cnt = 0, size = 1;
        Queue<Integer> queue = new LinkedList<>();
        int[] array = IntStream.rangeClosed(1, num).toArray();

        for (int i = 2; i <= num; i++) {
            int sum = 0;
            for (int j = 0; j < num - i; j++) {
                for (int k = j; k < j + i; k++) {
                    sum += array[k];
                    queue.add(array[k]);
                }
                if (sum == num) {
                    while (true) {
                        Integer pop = queue.poll();
                        System.out.print(pop);
                        if (!queue.isEmpty()) {
                            System.out.print(" + ");
                        } else {
                            System.out.println(" = " + num);
                            break;
                        }
                    }
                    cnt++;
                } else {
                    queue.clear();
                }
                sum = 0;
            }
        }
        System.out.println(cnt);
    }
}
