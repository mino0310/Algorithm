package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Mountain {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int size = Integer.parseInt(br.readLine());
        int[][] map = new int[size + 2][size + 2];
        int[] dx = new int[]{-1, 0, 1, 0};
        int[] dy = new int[]{0, -1, 0, 1};
        int cnt = 0;

        for (int i = 1; i <= size; i++) {
            int[] line = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            for (int j = 1; j <= size; j++) {
                map[i][j] = line[j-1];
            }
        }

        for (int i = 1; i <= size; i++) {
            for (int j = 1; j <= size; j++) {
                int nowValue = map[i][j];
//                System.out.println("now searching map["+i+"]["+j+"]");
//                System.out.println("now value = " + nowValue);
                boolean isBiggest = true;
                for (int k = 0; k < 4; k++) {
                    int newX = j + dx[k];
                    int newY = i + dy[k];

                    int searchedValue = map[newY][newX];
//                    System.out.println("compared map[" +newY + "][" + newX + "] = " + searchedValue);
                    if (searchedValue > nowValue) {
                        isBiggest = false;
                        break;
                    }
                }
                if (isBiggest) {
                    System.out.println("it's biggest, value = " + map[i][j]);
                    cnt++;
                }
            }
        }
        System.out.println(cnt);
    }
}