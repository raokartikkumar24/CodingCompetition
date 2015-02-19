#include <iostream>
#include <vector>


using namespace std;

int main()
{


	int N;
	cin>>N;
	std::vector<int> array(N);

	for (int i = 0; i < N; ++i)
	{
		int n;
		cin>>n;
		array[i] = n;
	}


	int p = array[0];

	std::vector<int> array2;
	std::vector<int> array3;

	int k = 0;
	for (int i = 1; i < N; ++i)
	{
		if(array[i] <= p) 
			array2.push_back(array[i]);
		else
			array3.push_back(array[i]);
	}
	array2.push_back(p);

	for ( k = 0; k < array2.size(); ++k)
 		array[k] = array2[k];

 	//cout<<k<<" "<<array2.size()<<" "<<array3.size()<<endl; 
	for (int i = 0; i < array3.size(); ++i)
		array[k++] = array3[i];

	for (int i = 0; i < N; ++i)
	 	cout<<array[i]<<" ";




	return 0;



}