#include <iostream>
    #include <vector>
    using namespace std;
    
    int main() {
    	int T;
    	cin >> T;
    	while(T--){
    	    int N;
    	    cin >> N;
    	    vector<int> numbers(N);
    	    for(int i = 0 ; i < N; i++){
    	        cin >> numbers[i];
    	    }
    	    vector<int> greatestNumbers;
    	    bool greatest = false;
    	    int j = 0;
    	    for(int i = 0 ; i < N; i++){
    	        j = i+1;
    	        while(numbers[i] > numbers[j] && j < N){
    	            if(j == N-1){
    	                greatest = true;
    	                greatestNumbers.push_back(numbers[i]);
    	                break;
    	            }
    	            else {
    	                greatest = false;
    	            }
    	            j++;
    	        }
    	    }
    	    greatestNumbers.push_back(numbers[N-1]);
    	    
    	    for(int i = 0 ; i < greatestNumbers.size(); i++)
    	        cout << greatestNumbers[i] << " ";
    	    cout << "\n";
    	}
    	return 0;
    }
