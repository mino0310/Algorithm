package com.example.inflearn.chapter1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class MaxTemperature {

    public static void main(String[] args) throws IOException {
        int tmpSum = 0;
        int max = 0;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        Integer days = Integer.valueOf(st.nextToken());
        Integer sumDay = Integer.valueOf(st.nextToken());
        Queue<Integer> queue = new LinkedList<>();
        StringTokenizer st2 = new StringTokenizer(br.readLine());

        for (int i = 0; i < sumDay; i++) {
            Integer added = Integer.valueOf(st2.nextToken());
            queue.add(added);
            max += added;
            tmpSum += added;
        }

        while (st2.hasMoreTokens()) {
            // 큐를 이용해서 넣고 합 이걸 반복하는 게 낫지 않나.

            Integer added = Integer.valueOf(st2.nextToken());
            queue.add(added);
            tmpSum -= Integer.valueOf(queue.poll());
            tmpSum += Integer.valueOf(added);
            if (tmpSum > max) max = tmpSum;
        }

        System.out.println("max = " + max);

    }




}
