#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = malloc(sizeof(char) * 10);
    int *nums = malloc(sizeof(int) * 10);
    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[8] = 'w';
    // str[9] = '\0';
    // printf("%p\n", str);
    // printf("%p\n", &str[0]);
    // printf("%d %d\n", sizeof(char), sizeof(int));
    // printf("%d %d\n", sizeof(char*), sizeof(int*));
    printf("%s\n", str);
    return 0;
}
