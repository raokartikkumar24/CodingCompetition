#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int T;
	cin>>T;

	while( T-- )
	{
		long N;
		cin>>N;
		vector<long> array(N);



		long max_sum = 0;
		long positive_sum = 0;
		long current_sum = 0;

		for(int i = 0 ; i < N ; i++)
			cin>>array[i];


		if( N == 1)
			cout<<array[0]<<" "<<array[0]<<endl;

		else {

		int start_index = 0;
		int end_index = 0;
		int j = 0;
		int c_i = -1;
		for( ; j < N ; j++)
		{

			long val = current_sum + array[j];
			if( val > 0 ) {
				if (current_sum == 0 )
					c_i = j;
				current_sum = val;

			}

			else
				current_sum =0;


			if (current_sum > max_sum)
			{
				max_sum = current_sum;
				start_index = c_i;
				end_index = j;
			}


		}

		long cont_sum = 0;
		for(int p = start_index ; p <= end_index ; p++)
			cont_sum +=array[p];

		bool atleastonepositive = false;

		for(int x = 0 ; x < N ; x++)
		{
			 if(array[x] > 0) {
				positive_sum +=array[x];
				atleastonepositive = true;
			}
		}

		if(atleastonepositive == false )
			positive_sum = -1;

		cout<<cont_sum<<" "<<positive_sum<<endl;
	}

	}

	return 0;
}