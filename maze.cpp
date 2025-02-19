#include <iostream>

using namespace std;

const int ROWS = 4;
const int COLS = 4;

int countPaths(char maze[ROWS][COLS], int x, int y, int destX, int destY) {
    if (x < 0 || y < 0 || x >= ROWS || y >= COLS || maze[x][y] == '#') 
        return 0;

    if (x == destX && y == destY) 
        return 1;

    maze[x][y] = '#';

    
    int paths = countPaths(maze, x + 1, y, destX, destY)  
              + countPaths(maze, x - 1, y, destX, destY) 
              + countPaths(maze, x, y + 1, destX, destY)  
              + countPaths(maze, x, y - 1, destX, destY); 

    
    maze[x][y] = '.';

    return paths;
}

int main() {
    char maze[ROWS][COLS] = {
        {'.', '.', '#', '.'},
        {'.', '#', '.', '.'},
        {'.', '.', '.', '#'},
        {'#', '.', '.', '.'}
    };

    int startX = 0, startY = 0;
    int destX = 3, destY = 3;

    int totalPaths = countPaths(maze, startX, startY, destX, destY);
    cout << "Total Paths: " << totalPaths << endl;

    return 0;
}

