package com.example.inflearn.chapter3;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class PathSearch {

    static int cnt = 0, NumberOfNode, NumberOfEdge;
    static int[][] map = new int[22][22];
    static int[] check = new int[22];

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        NumberOfNode = arr[0];
        NumberOfEdge = arr[1];

        // 인접행렬 구성
        for (int i = 0; i < NumberOfEdge; i++) {
            int[] tmp = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            //1 2 면 1에서 2를 간다는 것. 반대는 안됨.
            // 그럼 1행에서 2열을 체크. [1][2] 체크 [start][end] = 1;
            map[tmp[0]][tmp[1]] = 1;
        }
        // 인접행렬을 바탕으로 경로 구하기 by DFS
        // 시작점은 1
        check[1] = 1;
        DFS(1);
        System.out.println(cnt);
    }

    private static void DFS(int node) {
        if (node == NumberOfNode) {
            cnt++;
        } else {
            // DFS시작 DFS는 재귀
            // 들어가기 전 행동 - 조건 검사.
            // 연결되어 있고 && 방문하지 않았으면
            for (int j = 1; j <= NumberOfNode; j++) {
                if (map[node][j] == 1 && check[j] == 0) {
                    // DFS를 타고 방문한다.
                    check[j] = 1;
                    // 방문을 DFS로 진행
                    DFS(j);
                    // 나와서는 다시 초기화.
                    check[j] = 0;
                }
            }
        }
    }
}
