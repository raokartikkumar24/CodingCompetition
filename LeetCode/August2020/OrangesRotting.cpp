#include <iostream>
#include <map>
#include <vector>

using namespace std;


class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();
        
        vector<vector<int>> senitel(rows+2, vector<int>(columns+2));
        bool contains1 = false;
        for(int i = 0 ; i < rows; i++) {
            for(int j = 0 ; j < columns; j++) {
                //senitel[i][j] = -1;
                senitel[i+1][j+1] = grid[i][j];
                if(grid[i][j] == 1) contains1 = true;
            }
        }
        
    
        if(!contains1) return 0;
        int minimumCounter = 0;
        for(int i = 1; i <= rows; i++) {
            for(int j = 1 ; j <= columns; j++) {
                bool updated = false;
                if(senitel[i][j] == 2) {
                    if(senitel[i][j+1] == 1)  {
                        senitel[i][j+1] = 2;
                        updated = true;
                    }
                    if(senitel[i][j-1] == 1) {
                        senitel[i][j-1] = 2;
                        updated = true;
                    }
                    if(senitel[i+1][j] == 1) {
                        senitel[i+1][j] = 2;
                        updated = true;
                    }
                    if(senitel[i-1][j] == 1) {
                        senitel[i-1][j] = 2;   
                        updated = true;
                    }
                    if(updated)
                        minimumCounter++;
                }
            }
        }

         for(int i = 1; i <= rows; i++) {
            for(int j = 1 ; j <= columns; j++) {
                if(senitel[i][j] == 1) return -1;
            }
         }
        
        return minimumCounter;
        
    }
};

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r, vector<int>(c));

    for(int i = 0 ; i < r; i++) {
        for(int j = 0 ; j < c; j++) {
           cin >> matrix[i][j];
        }
    }

    Solution sol;
    cout << sol.orangesRotting(matrix) << "\n";

    return 0;
}