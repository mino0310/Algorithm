package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class MaximumOfBlock {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int blockNum = Integer.parseInt(br.readLine());
        int[] frontBlocks = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int[] sideBlocksReverse = Arrays.stream(new StringBuilder(br.readLine()).reverse().toString().split(" ")).mapToInt(Integer::parseInt).toArray();
        int sum = 0;
        int[][] map = new int[blockNum][blockNum];
        // 일단 정면에서 본 최대값으로 값을 채운다.
        for (int i = 0; i < blockNum; i++) {
            for (int j = 0; j < blockNum; j++) {
                map[i][j] = Math.min(frontBlocks[j], sideBlocksReverse[i]);
            }
        }

        // 이제 측면 적용
//        for (int i = 0; i < blockNum; i++) {
//            for (int j = 0; j < blockNum; j++) {
//                map[i][j] = Math.min(map[i][j], sideBlocksReverse[i]);
//            }
//        }



        // 정면 개수와 측면 개수를 만족 시키게끔 하는 블록의 최대값을 구하기
        // 블록을 일단 최대 개수로 넣고 두 최대 조건에 맞게끔 하는 개수로 제한하면(줄이면) 됨

        // 블록의 값은 두 최대값보다 크면 안됨, 두 최대값중 작은 값으로 맞춰야 함.ㅇㅋ

        for (int i = 0; i < blockNum; i++) {
            for (int j = 0; j < blockNum; j++) {
                sum += map[i][j];
                System.out.print(map[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println(sum);
    }
}
