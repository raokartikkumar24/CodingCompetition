#include <iostream>
#include <vector>
#include <string>
#include <map>

 using namespace std;


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
         int result = 0;
         
        map<int, int> hashMap;
        
        for(int i = 0 ; i < nums.size(); i++) {
            hashMap[nums[i]] = nums[i];
        }
        
        int counter = 1;

        map<int, int>::reverse_iterator revIt = hashMap.rbegin();
      
        if(hashMap.size() < 3) {
          result = revIt->first;
        }
        else {
            for(revIt = hashMap.rbegin(); revIt != hashMap.rend(); revIt++) {
             
               if(counter == 3) {
                result = revIt->first;
              }
               counter++;
            }
        }
        
        return result;
    }
};


int main()
{
	
	Solution sol;

	vector<int> ins;

	int n;
	cin >> n;
	while(n--) {
		int item;
		cin >> item;
		ins.push_back(item);
	}

	int result = sol.thirdMax(ins);

	cout << "third max is : " << result << "\n";

	return 0;
}