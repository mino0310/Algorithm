package com.example.inflearn.chapter3;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class BinaryTreeDFS {

    List<Integer> list = new ArrayList<>();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(br.readLine());
        DFS(num);



    }

    public static void DFS(int n) {
        if (n > 7) {
            return ;
        } else {
//            System.out.print(n + " ");
            DFS(2 * n);
//            System.out.print(n + " ");
            DFS(2 * n + 1);
            System.out.print(n + " ");

        }
    }

}
