package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;

public class UglyNumber {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(br.readLine());
        int[] uglyNumbers = new int[1501];
        Queue<Integer> twoQueue = new LinkedList<>();
        Queue<Integer> threeQueue = new LinkedList<>();
        Queue<Integer> fiveQueue = new LinkedList<>();
        Stack<Integer> resultStack = new Stack<>();

        uglyNumbers[1] = 1;
        resultStack.push(1);

        for (int i = 2;; i++) {
            if (i == num+1) break;
            Integer top = resultStack.peek();
            twoQueue.add(top * 2);
            threeQueue.add(top * 3);
            fiveQueue.add(top * 5);
            // 큐에서 값을 꺼내는 과정을 잘 처리해야 함.
            Integer five = fiveQueue.peek();
            Integer two = twoQueue.peek();
            Integer three = threeQueue.peek();
            int min = Math.min(five, Math.min(two, three));
            if (two == min) twoQueue.poll();
            if (three == min) threeQueue.poll();
            if (five == min) fiveQueue.poll();
            resultStack.push(min);
        }
        Integer res = resultStack.pop();
        System.out.println(res);
    }
}
