#include <stdio.h>

int main(int argc, char *argv[]) {
    // 0 Argument ist der Programmname
    for (int i = 1; i < argc; i++) {
        for (char *p = argv[i]; *p != '\0'; p++) {
            if (*p < 'a' || *p > 'z') {
                printf("error: args must only contain characters [a-z]!\n");
                return -1;
            }
        }
    }


    for (int i = 1; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}