package com.example.inflearn.chapter2;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Mountain {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int size = Integer.parseInt(br.readLine());
        int[][] map = new int[52][52];
        int[] dx = new int[]{-1, 0, 1, 0};
        int[] dy = new int[]{0, 1, 0, -1};
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
                boolean isBiggest = true;
                for (int k = 0; k < 4; k++) {
                    int newX = i + dx[k];
                    int newY = j + dy[k];
                    int searchedValue = map[newX][newY];
                    if (searchedValue >= nowValue) {
                        isBiggest = false;
                        break;
                    }
                }
                if (isBiggest) {
                    cnt++;
                }
            }
        }
        System.out.println(cnt);
    }
}