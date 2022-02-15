package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class InterSection {
    public static void main(String[] args) throws IOException {

        int a, b, firstSetSize, secondSetSize;
        int[] firstSet, secondSet;
        List<Integer> list;
        BufferedReader br;

        list = new ArrayList<>();
        br = new BufferedReader(new InputStreamReader(System.in));
        firstSetSize = Integer.parseInt(br.readLine());
        firstSet = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        secondSetSize = Integer.parseInt(br.readLine());
        secondSet = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();

        // 각자 정렬을 했음.
        Arrays.sort(firstSet);
        Arrays.sort(secondSet);

        // 각 인덱스 초기화
        a = b = 0;

        // 일단 맨 앞의 값이 같은지 확인한다 (교집합 확인)
        while (true) {
            // 같다면 교집합 배열에 넣고 각자 인덱스 전진
            if (firstSet[a] == secondSet[b]) {
                list.add(firstSet[a]);
                a++;
                b++;
            }
            // 같지 않다면 그 중 작은 값을 가진 배열의 인덱스만 전진
            else if (firstSet[a] < secondSet[b]) {
                a++;
            } else {
                b++;
            }
            if (a == firstSetSize || b == secondSetSize) {
                break;
            }
        }



        // 위 과정을 두 배열중 하나가 끝날 때까지만 반복

        list.forEach(i -> System.out.print(i + " "));
    }


}
