#include<iostream>
using namespace std;

void printAllPathsUtil(int *mat, int i, int j, int m, int n, int *path, int pi)
{
    // Reached the bottom of the matrix so we are left with
    // only option to move right
    if (i == m - 1)
    {
        for (int k = j; k < n; k++)
            path[pi + k - j] = *((mat + i*n) + k);
        for (int l = 0; l < pi + n - j; l++)
            cout << path[l] << " ";
        cout << endl;
        return;
    }
 
    // Reached the right corner of the matrix we are left with
    // only the downward movement.
    if (j == n - 1)
    {
        for (int k = i; k < m; k++)
            path[pi + k - i] = *((mat + k*n) + j);
        for (int l = 0; l < pi + m - i; l++)
            cout << path[l] << " ";
        cout << endl;
        return;
    }
 
    // Add the current cell to the path being generated
    path[pi] = *((mat + i*n) + j);
 
    // Print all the paths that are possible after moving down
    printAllPathsUtil(mat, i+1, j, m, n, path, pi + 1);
 
    // Print all the paths that are possible after moving right
    printAllPathsUtil(mat, i, j+1, m, n, path, pi + 1);
 
    // Print all the paths that are possible after moving diagonal
    // printAllPathsUtil(mat, i+1, j+1, m, n, path, pi + 1);
}
 
// The main function that prints all paths from top left to bottom right
// in a matrix 'mat' of size mXn
void printAllPaths(int *mat, int m, int n)
{
    int *path = new int[m+n];
    printAllPathsUtil(mat, 0, 0, m, n, path, 0);
}

int main()
{
    int mat[2][2] = { {1, 2}, {4, 5} };
    printAllPaths(*mat, 2, 2);
    return 0;
}