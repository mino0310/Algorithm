package com.example.inflearn.chapter3;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;

public class AdjacentListPathSearch {

    static ArrayList<ArrayList<Integer>> graph;
    static int[] check;
    static int NumberOfNodes;
    static int NumberOfEdges;
    static int res;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] arr = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        NumberOfNodes = arr[0];
        NumberOfEdges = arr[1];

        graph = new ArrayList<>();
        for (int i = 0; i <= NumberOfNodes; i++) {
            graph.add(new ArrayList<>());
        }

        for (int i = 0; i < NumberOfEdges; i++) {
            int[] tmp = Arrays.stream(br.readLine().split(" ")).mapToInt(Integer::parseInt).toArray();
            // a와 b가 연결되어있다.
            // a와 b를 함꼐 가진 배열을 graph 에 넣어주면 된다.
            // 왜 배열을 넣어주냐? 그래야 값을 계속 추가해서 넣을 수 있따.
            // 가중치 안넣는다면 그냥 값만 리스트에 넣어둬도 된다.

            graph.get(tmp[0]).add(tmp[1]);
            // tmp[0] 은 시작 노드 tmp[1] 은 도착 노드를 말함
            // 그러니까 시작 노드로 시작해서 어디로 도착할 수 있는지 정리할 수 있다.
            // tmp[1]은 배열을 가져오는데, 해당 노드를 시작점으로 해서 도착할 수 있는 노드들의 값이 추가되는 것.
        }
        check = new int[NumberOfNodes + 1];
        check[1] = 1;
        dfs(1);
        System.out.println(res);

    }

    public static void dfs(int v) {
        if (v == NumberOfNodes) {
            res++;
        } else {
            for (int nv : graph.get(v)) {
                if (check[nv] == 0) {
                    check[nv] = 1;
                    dfs(nv);
                    check[nv] = 0;
                }
            }
        }
    }
}
