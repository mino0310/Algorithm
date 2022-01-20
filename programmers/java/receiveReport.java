package com.example.codingTest;

import java.util.*;

public class receiveReport {
    public static void main(String[] args) {
//        int[] solution = solution(new String[]{"con", "ryan"}, new String[]{"ryan con", "ryan con", "ryan con", "ryan con"}, 3);
        int[] solution = solution(new String[]{"muzi", "frodo", "apeach", "neo"}, new String[]{"muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"}, 2);

        for (int i : solution) {
            System.out.print(i + " ");
        }
    }

    public static int[] solution(String[] id_list, String[] report, int k) {
        int[] answer = {};
        Map<String, User> map = new HashMap<>();


        for (String reporter : id_list) {
            User user = new User(reporter, 0);
            map.put(reporter, user);
        }

        for (String reportCase : report) {
            String[] arr = reportCase.split(" ");
            String reporter = arr[0];
            String reported = arr[1];

            if (doubleCheck(map, reporter, reported) == true) {
                System.out.println("중복이요! report = " + reporter + " reported = " +reported);
                continue;
            }
            map.get(reported).reportCnt++;
            map.get(reported).ReportedBy(reporter);
        }

        for (String s : id_list) {
            List<String> reportedBy = map.get(s).getReportedBy();
            if (map.get(s).getReportCnt() >= k) {
                for (String s1 : reportedBy) {
                    map.get(s1).contact++;
                }
            }
        }

        int[] ints = new int[id_list.length];
        int i = 0;
        for (String s : id_list) {
            String name = map.get(s).getName();

            Integer contact = map.get(s).getContact();
            ints[i++] = contact;
        }


        return ints;
    }

    private static boolean doubleCheck(Map<String, User> map, String reporter, String reported) {
        List<String> reportedBy = map.get(reported).getReportedBy();
        for (String s : reportedBy) {
            if (reporter.equals(s)) {
                return true;
            }
        }
        return false;
    }

    static class User {
        String name;
        List<String> reportedBy = new ArrayList<>();
        int reportCnt;
        int contact;

        public int getContact() {
            return contact;
        }

        public void setContact(Integer contact) {
            this.contact = contact;
        }

        public void ReportedBy(String reportedBy) {
            this.reportedBy.add(reportedBy);
        }

        public User(String name, Integer reportCnt) {
            this.name = name;
            this.reportCnt = reportCnt;
        }

        public String getName() {
            return name;
        }

        public List<String> getReportedBy() {
            return reportedBy;
        }

        public int getReportCnt() {
            return reportCnt;
        }
    }
}
