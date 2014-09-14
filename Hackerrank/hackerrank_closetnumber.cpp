#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	long N;
	cin>>N;
	
	long *array = new long[N];
	for(int i = 0; i < N ;i++)
		cin>>array[i];
		
	sort(array,array+N);
	
	long a = 0, b = N-1;
	long min = 0;
	while( a < b )
	{
		//cout<<"Inside while loop"<<endl;
		if( min < abs(array[a]-array[b]) )
		{
			
			//min = abs(array[a]-array[b]);
			cout<<"==1=="<<"::min "<<min<<endl;
			a++;
		}
		else if( min == abs(array[a]-array[b]))
		{
			cout<<"==2=="<<"::min "<<min<<endl;
			cout<<array[a]<<" "<<array[b]<<endl;
			a++;b--;
			
		}
		else if( min > abs(array[a]-array[b]) )
		{
			min = abs(array[a]-array[b]);
			cout<<"==3=="<<"::min "<<min<<endl;
			b--;
		}
			
	
	}
	
	
	return 0;
	
}