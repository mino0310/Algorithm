package com.example.codingTest;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class sortStringRandom {
    public static void main(String[] args) {
        solution(new String[]{"sun", "bed", "car"}, 1);
//        for (String s : solution) {
//            System.out.println("s = " + s);
//        }
    }

    public static String[] solution(String[] strings, int n) {
        List<Random> list = new ArrayList<>();

        Comparator<Random> myComparator = new Comparator<Random>() {
            @Override
            public int compare(Random o1, Random o2) {
                if (o1.standardChar > o2.standardChar) {
                    return 1;
                } else if (o1.standardChar == o2.standardChar) return o1.str.compareTo(o2.str);
                else return o1.standardChar - o2.standardChar;
            }
        };

        for (String string : strings) {
            list.add(new Random(string, string.charAt(n)));
        }
        Collections.sort(list, myComparator);

        List<String> answer = new ArrayList<>();
        for (Random random : list) {
            answer.add(random.str);
        }
        return answer.toArray(new String[0]);
    }

    static class Random {
        String str;
        char standardChar;

        public Random(String str, char standardChar) {
            this.str = str;
            this.standardChar = standardChar;
        }
    }
}