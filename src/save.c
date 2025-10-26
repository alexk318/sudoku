#include <stdio.h>

void save() {
    char text[] = "HOW ARE YOU?\n";

    FILE* f1 = fopen("../saves/save.txt", "w");

    size_t w1 = fwrite(text, sizeof(text[0]), sizeof(text) / sizeof(text[0]) - 1, f1);
    
    char text2[] = "GOOD";
    size_t w2 = fwrite(text2, sizeof(text2[0]), sizeof(text2) / sizeof(text2[0]) - 1, f1);

    fclose(f1);
}