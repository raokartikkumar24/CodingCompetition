#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
        int sum_L = 0;
        int sum_M = 0;
        int i = 0, j = 0;
        int LStart, LEnd;
        for(i = 0 ; i < A.size(); i++) {
            int tempSum = 0;
            j = i; 
            int count = 0;
            while(count < L) {
                count++;
                tempSum += A[j];
                j++;
            }
            if(tempSum > sum_L) {
                 sum_L = tempSum;
                LStart = i;
                LEnd = j;
            }
           
        }
        
          for(i = 0 ; i < A.size(); i++) {
            int tempSum = 0;
            j = i; 
            int count = 0;
            while(count < M) {
                count++;
                tempSum += A[j];
                j++;
            }
            if((i < LStart && j < LStart) ||
                (i > LEnd && j > LEnd)) {
            sum_M = max(sum_M, tempSum);
            }
        }

        return sum_L + sum_M;
    }
};

int main()
{
    int L, M;
    vector<int> nums;
    int s;
    cin >> s;
    while(s--) {
        int item;
        cin >> item;
        nums.push_back(item);
    }

    cin >> L >> M;

    Solution sol;
    cout << sol.maxSumTwoNoOverlap(nums, L , M) << "\n";
    return 0;
}