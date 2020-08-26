#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    
    bool isValid3X3(vector<vector<char>>& board, int r, int c) {
        set<char> nums;
        for(int i = r ; i < r+3; ++i) {
            for(int j = c ; j < c+3; ++j) {
                if(board[i][j] != '.') {
                    if(nums.count(board[i][j]) > 0) return false;
                    nums.insert(board[i][j]);
                }
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        bool result = false;
        
        //all rows
        for(int i = 0 ; i < 9; i++) {
            set<char> nums;
            for(int j = 0 ; j < 9; j++) {
                 if(board[i][j] != '.') {
                    if(nums.count(board[i][j]) > 0) return false;
                    nums.insert(board[i][j]);
                 }
            }
        }
        
        //allcolums
        for(int i = 0 ; i < 9; i++) {
            set<char> nums;
            for(int j = 0 ; j < 9; j++) {
                 if(board[j][i] != '.') {
                    if(nums.count(board[j][i]) > 0) return false;
                    nums.insert(board[j][i]);
                 }
            }
        }
        
        result = true;
        
        for(int i = 0 ; i < 9 ; i+= 3) {
            for(int j = 0 ; j < 9; j += 3) {
                if(isValid3X3(board, i, j) == false) 
                    return false;
                
            }
        }
        
        return true;
        
       
    }
};

int main()
{
    vector<vector<char> > board(9, vector<char>(9));
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> board[i][j];
        }
    }
    Solution sol;
    cout << sol.isValidSudoku(board) << "\n";

    return 0;
}