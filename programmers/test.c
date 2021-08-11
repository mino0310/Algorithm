#include <unistd.h>
#include <string.h>

void ft_printf(const char *str) {
    char percent = 0;
    int per_index = -1;
    int i = 0;
    for (i = 0; str[i]; i++) {
        if (str[i] == '%') {
            percent = '%';
            per_index = i;
        }
    }
    if (percent == 0) {
        for (int i = 0; str[i]; i++) {
            write(1, &str[i], 1);
        }
    } else if (percent == '%') {
        if (str[++per_index] == 'd') {
            for (int i = per_index; i < strlen(str); i++) {
                char output = str[i] - '0';
                write(1, &output, 1);
                write(1, &"h", 1);
            }
        }
        write(1, &"zzzz", 4);
    }
}

int main() {
    const char *str1 = "qqw%d1234";
    ft_printf(str1);
    return 0;
}