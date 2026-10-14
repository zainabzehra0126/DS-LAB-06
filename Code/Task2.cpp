#include <iostream>
using namespace std;

#define N 4

int FindPath(int maze[N][N], int row, int col){
    if (row >= N || col >= N)
        return 0;

    if (maze[row][col] == 0)
        return 0;

    if (row == N - 1 && col == N - 1)
        return 1;

    int right = FindPath(maze, row, col + 1);
    int down = FindPath(maze, row + 1, col);

    return right + down;
}

void DisplayPaths(int maze[N][N], int path[N][N], int row, int col){
    if (row >= N || col >= N || maze[row][col] == 0)
        return;

    path[row][col] = 1;

    if (row == N - 1 && col == N - 1){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++)
                cout << path[i][j] << " ";
            cout << endl;
        }

        cout << endl;
        path[row][col] = 0;
        return;
    }

    DisplayPaths(maze, path, row, col + 1);
    DisplayPaths(maze, path, row + 1, col);
    path[row][col] = 0;
}

int main(){
    int maze[N][N] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    int path[N][N] = {0};
    int ways = FindPath(maze, 0, 0);

    cout << "Number of ways: " << ways << endl << endl;

    cout << "Paths:\n";
    DisplayPaths(maze, path, 0, 0);

    return 0;
}