#include <stdio.h>

void save() {
    char text[] = "HOW ARE YOU?";

    FILE* f1 = fopen("save.txt", "wb");

    size_t w1 = fwrite(text, sizeof(text[0]), sizeof(text) / sizeof(text[0]) - 1, f1);
    fclose(f1);
}