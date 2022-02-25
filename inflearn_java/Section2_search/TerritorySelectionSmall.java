package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class TerritorySelectionSmall {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] input = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int height = input[0];
        int width = input[1];

        int[][] map = new int[500][500];

        // 맵 입력
        for (int i = 1; i <= height; i++) {
            int[] trees = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            for (int j = 1; j <= width; j++) {
                map[i][j] = trees[j-1];
            }
        }
        int max = -1;

        int[] mySize = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int myHeight = mySize[0];
        int myWidth = mySize[1];
        int tmpSum = 0;
        // 내가 고를 수 있는 영지 최대 크기 탐색
        for (int i = 1; i <= height; i++) {
            for (int j = 1; j <= width; j++) {
                // 일단 j 가 1일 때만 완전히 탐색해서 구하자
                tmpSum = 0;
                for (int k = i; k < i + myHeight; k++) {
                    for (int l = j; l < j + myWidth; l++) {
                        tmpSum += map[k][l];
                    }
                }
                max = Math.max(tmpSum, max);
            }

//                if (j == 1) {
//                    tmpSum = 0;
//                    for (int k = i; k <= myHeight; k++) {
//                        for (int l = j; l <= myWidth; l++) {
//                            tmpSum += map[k][l];
//                        }
//                    }
//                    // 큰값 저장
//                    max = Math.max(max, tmpSum);
//                    System.out.println("j 가 1일때 구한 값은 = " + max);
//                }
//                // j 가 1이 아니면은 직전에 한 col을 삭제하고 다음 col을 더하고
//                else {
//                    for (int k = i; k <= myHeight; k++) {
//                        if (k + myHeight > height) break;
//                        if (j - 1 < 1 || j + 1 > width) break;
//                        tmpSum -= map[k][j-1];
//                        tmpSum += map[k][j+1];
//                    }
//                    max = Math.max(max, tmpSum);
//                    System.out.println("구한 값은 = " + max);
//                }
//                // 그렇게 구한 값의 최대값을 저장
//
//            }
        }
        System.out.println(max);
    }
}
