#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

	long N;
	cin>>N;
	long t = N;
	vector<long> inputNums;
	
	int count = 0;
	while(t--) {
	long num;
		cin>>num;
		//inputNums[count++] = num;
		inputNums.push_back(num);
	}
	
	
	cout<<"Before sorting"<<endl;
	
	 vector<long>::iterator it = inputNums.begin();
	
	 for(;it != inputNums.end(); it++ )
		 cout<<*it<<" ";
		
	 cout<<endl<<"After Sorting"<<endl;
	
	 it = inputNums.begin();
	
	sort(inputNums.begin(), inputNums.end());
	
	 for(;it != inputNums.end(); it++ )
		 cout<<*it<<" ";
	
	cout<<N/2<<" "<<inputNums[N/2]<<endl;

	return 0;
}
