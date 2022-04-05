package com.example.inflearn.chapter3;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class MazeRunner {

    static int[][] map = new int[9][9];
    static int[][] check = new int[9][9];
    static int NumberOfLoad = 0;
    static int[] dx = {-1, 0, 1, 0};
    static int[] dy = {0, -1, 0, 1};

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int mazeRowSize, mazeColumnSize;
        int[] row;
        mazeColumnSize = mazeRowSize = 7;

        // 맵 입력 받기.
        for (int i = 1; i <= mazeRowSize; i++) {
            row = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            for (int j = 1; j <= mazeColumnSize; j++) {
                map[i][j] = row[j - 1];
            }
        }

        // 미로 찾기
        // 상하좌우로 움직이면서 갈 수 있는 대로 계속 가보고 돌아오면 됨.
        // DFS 사용하면 됨. DFS가 들어갈 수 있는 가지수는 4가지.
        // 4가지가 되니 하나씩 하면 귀찮으니 반복문 구성하는 게 이득
        // 반복문 구성은 4방향으로 하면 됨. 4방향을 컨트롤 할 수 있게 변수를 잡아주면 됨.
        // 각 위치로 이동할 경우 x,y 좌표의 변위값을 지정해주면 됨.

        check[1][1] = 1;
        DFS(1, 1);
        System.out.println(NumberOfLoad);
    }

    private static void DFS(int x, int y) {
        System.out.println("now x = " + x + " y = " + y);
        if (x == 7 && y == 7) {
            NumberOfLoad++;
        } else {
            // 재귀적으로 들어가면서 탐색해야 함.
            // DFS 를 써야 한다는 말.

            for (int i = 0; i < 4; i++) {
                // DFS로 들어가기 전 해야할 거 - 조건 검사
                // 조건 1. 다음 갈 곳이 유효한 맵 범위인지 체크 (x,y 값이 0보다 크고 8보다 작아야 함)
                // 조건 2. 방문한 곳이 아니어야 함. (체크배열)
                // 조건 3. 딱히 없는듯?
                int newX = x + dx[i];
                int newY = y + dy[i];
                if (validateOrdinate(newX, newY) && map[newX][newY] == 0 && check[newX][newY] == 0) {
                    check[newX][newY] = 1;
                    DFS(newX, newY);
                    check[newX][newY] = 0;
                }
            }
        }
    }

    private static boolean validateOrdinate(int x, int y) {
        return (x > 0 && x < 8) && (y > 0 && y < 8);
    }
}
