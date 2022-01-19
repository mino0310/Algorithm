package com.example.codingTest;

public enum Week {
    MONDAY("월요일"), TUESDAY("화요일");

    private final String day;

    Week(String day) {
        this.day = day;
    }

    public String getDay() {
        return day;
    }
}
