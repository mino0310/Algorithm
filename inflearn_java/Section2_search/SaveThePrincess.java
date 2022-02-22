package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.IntStream;

public class SaveThePrincess {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] inputs = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int totalPrinces = inputs[0];
        int outNumber = inputs[1];
        int[] arr = new int[totalPrinces + 1];
        int cnt = 0, idx = 1;
        List<String> remain = new ArrayList<>();

        // 왕자 배열 초기화
        for (int i = 1; i <= totalPrinces; i++) {
            arr[i] = i;
            remain.add(i+"");
        }

        while (remain.size() != 1) {
            // 반복 회수가 원형구조를 가지도록 설정
            idx = idx > totalPrinces ? idx % totalPrinces : idx;

            // 개수 세기
            cnt = arr[idx] != 0 ? cnt + 1 : cnt;

            // outNumber 번째 숫자가 되면 제외
            if (cnt == outNumber) {
                remain.remove(arr[idx] + "");
                arr[idx] = 0;
                cnt = 0;
            }
            // 다음 인덱스로 진행
            idx++;
        }

        int[] array = remain.stream().mapToInt(Integer::parseInt).toArray();
        int res = array[0];
        System.out.println(res);
    }
}
