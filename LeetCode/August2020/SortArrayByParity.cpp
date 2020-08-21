class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> resultArray(A.size());
        
        int countEven = 0;
        for(int i = 0 ; i < A.size(); i++) {
            if(A[i] == 0 || A[i]%2 == 0) countEven++;
        }
        
        int even = 0;
        int odd = countEven;
        
        for(int i = 0 ; i < A.size(); i++) {
            if(A[i] == 0 || A[i]%2 == 0)
                resultArray[even++] = A[i];
            else
                resultArray[odd++] = A[i];
        }
        
        return resultArray;
        
    }
};