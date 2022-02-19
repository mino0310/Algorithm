package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class SelectStable {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] array = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int stable = array[0];
        int horse = array[1];
        int lt, rt, mid, res = 0, cnt = 0;
        List<Integer> list = new ArrayList<>();
        // 정수 배열 사이의 거리의 최대값 구하기
        // 5개 중 3개를 뽑아서 그 차이를 구해야 함. 차이의 최소값이 가장 큰 값을 구해야 함.

        for (int i = 0; i < stable; i++) {
            int num = Integer.parseInt(br.readLine());
            list.add(num);
        }
        // 정렬해서 거리를 일자에 놓고 비교가 가능하게 만든다.
        Collections.sort(list);
        int[] numList = list.stream().mapToInt(i -> i).toArray();
        lt = 1;
        rt = list.get(stable - 1);
        // 최대 거리를 정해두고 그거를 이 5개의 중 3개로 구성할 수 있는지 파악하면 됨
        while (lt <= rt) {
            // 일단 거리의 최대값을 이거라고 정해놓자
            mid = (rt + lt) / 2;
            cnt = 1; // 고른 개수
            int before = numList[0]; // 첫번째 수
            for (int i = 1; i < stable; i++) {
                int sub = numList[i] - before;
                if (sub >= mid) {
                    cnt++;
                    before = numList[i];
                }
            }
            if (cnt >= horse) {
                res = mid;
                lt = mid + 1;
            } else {
                rt = mid - 1;
            }

            // 마구간 중 3개를 고를 수 있으면 = 최대값 구성 가능
            // 좀 더 최대값을 넓게 잡아야 함

            // 마구간 중 3개를 고를 수 없음녀 = 최대값 구성 불가능
            // 좀 더 최대값을 좁게 잡아야 함.

            // 값의 최소값이란 다른 값들은 무조건 이거보다 커야한단 말임.
            // 그러니 앞으로 나올 숫자와 직전 숫자의 거리가 무조건 mid 보다 커야  함.
        }
        // 구섣할 수 있다 -> 일단 값을 저장해두고, 좀 더 큰 거리를 구하려해본다

        // 구성할 수 없다 -> 좀 더 작은 거리를 구하려 해본다.

        // 이를 반복하고 마지막에 저장된 값이 정답!

        System.out.println(res);

    }
}
