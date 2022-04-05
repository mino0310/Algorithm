package com.example.inflearn.chapter3;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class adjacentMatrix {

    static int[][] map = new int[22][22];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int NumberOfNodes = arr[0];
        int NumberOfEdges = arr[1];

        for (int i = 0; i < NumberOfEdges; i++) {
            int[] tmpArr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            map[tmpArr[0]][tmpArr[1]] = tmpArr[2];
        }

        for (int i = 1; i <= NumberOfNodes; i++) {
            for (int j = 1; j <= NumberOfNodes; j++) {
                System.out.print(map[i][j] + " ");
            }
            System.out.println();
        }
    }
}
