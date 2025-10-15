#include "grid.c"
#include "save.c"

int main() {
    printf("\n");
    printf("----------- Sudoku -----------\n");

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

    view_grid(grid);

    /*
    Current grid: no open grid

    create. Create new grid
    save. Save grid
    load. Load grid
    view. View grid
    f4=2. Place 2 to cell f4
    */

    return 0;
}
