#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

void display(vector<int> ele)
{
	stringstream s1;
	vector<int>::iterator it = ele.begin();
	for(; it != ele.end(); it++ )
	{
		s1<<*it;
		// cout<<*it<<s1;
		
	}	
	int result;
	s1>>result;
	cout<<result;
	cout<<endl;

}

int main()
{
	int number;
	cin>>number;
	vector<int> elements;
	while( number > 0 )
	{
		elements.push_back( number%10 );
		number /= 10;
	
	}
	
	
	sort( elements.begin(), elements.end() );

	
	do{
		display(elements);
		
	}while( next_permutation( elements.begin(), elements.end() ));
	
	
	return 0;
}
