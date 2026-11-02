#include <stdio.h>
//
// Created by PureLearning on 2026/4/13.
//
int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    return 0;
}