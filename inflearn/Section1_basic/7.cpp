#include <iostream>
#include <stdio.h>
#include <string.h>

int isalpha(char c);
char tolower(char c);

int main(void) {
    char input[101], output[101];
    int i = 0, len = 0;

    fgets(input, sizeof(input), stdin);
    len = strlen(input);
    while (i < len) {
        if (isalpha(input[i])) {
            printf("%c", tolower(input[i]));
        }
        i++;
    }
    input[i] = '\0';
    return 0;
}

int isalpha(char c) {
    if ((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z') {
        return (1);
    }
    return (0);
}

char tolower(char c) {
    if (isalpha(c)) {
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
    }
    return (c);
}