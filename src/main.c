#include "string.h"
#include "grid.c"
#include "save.c"

int main() {
    char action[7];
    char grid[9][9] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    };

    printf("\n");
    printf("----------- Sudoku -----------\n\n");

    printf("Current grid: no open grid\n\n");

    while (1) {
        fgets(action, 8, stdin);

        if (!strcmp(action, "create\n")) {
            save();
            printf("Saved!\n\n");
            //struct Grid grid = create_grid(30);
            //view_grid(grid.grid);
            
        }

        else if (!strcmp(action, "save\n")) {
            char filename[16];
            fgets(filename, 16, stdin);
            printf("%s", filename);
        }

        else if (!strcmp(action, "saves\n")) {
            printf("Saves!\n");
        }

        else if (!strcmp(action, "open\n")) {
            printf("Open!\n");
        }

        else if (!strcmp(action, "view\n")) {
            view_grid(grid);
        }

        else if (!strcmp(action, "place\n")) {
            printf("Placed!\n");
        }

        else if (!strcmp(action, "exit\n")) {
            return 0;
        }

        else {
            printf("Unknown action.\n");
        }
    }

    /*
    char grid[9][9] = {
        {'5', '3', ' ', ' ', '7', ' ', ' ', ' ', ' '},
        {'6', ' ', ' ', '1', '9', '5', ' ', ' ', ' '},
        {' ', '9', '8', ' ', ' ', ' ', ' ', '6', ' '},

        {'8', ' ',  ' ', ' ', '6', ' ', ' ', ' ', '3'},
        {'4', ' ', ' ', '8', ' ', '3', ' ', ' ', '1'},
        {'7', ' ', ' ', ' ', '2', ' ', ' ', ' ', '6'},

        {' ', '6', ' ', ' ', ' ', ' ', '2', '8', ' '},
        {' ', ' ', ' ', '4', '1', '9', ' ', ' ', '5'},
        {' ', ' ', ' ', ' ', '8', ' ', ' ', '7', '9'},
    };
    */
}
