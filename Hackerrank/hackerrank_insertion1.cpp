#include<iostream>
using namespace std;

int main()
{
	int num;
	cin>>num;
	int *ele = new int[num];
	for(int k = 0 ; k < num ;k++)
		cin>>ele[k];


	int i,j,insertedElement;
	bool inserted = false;

	for(int k = 0 ; k < num ;k++)
		cout<<ele[k]<<" ";
	cout<<endl;

	for(i = 0 ; i < num ; i++)
	{
		insertedElement = ele[i];
		j = i;
		while( ele[j-1] > insertedElement && j >= 1 )
		{
			//keep on moving the element until we find the correct position for that element.
			ele[j] = ele[j-1];j--;
			inserted = true;

			
		}



		ele[j] = insertedElement;

		if( inserted ) {
			for (int idx = 0; idx < num; ++idx)
				cout<<ele[idx]<<" ";
		cout<<endl;
		}
		
	
	}

	/*for(int i = 0 ; i< num ; i++)
		cout<<ele[i]<<" ";	*/
	return 0;
}
