#include<iostream>
using namespace std;

int main()
{
	int num;
	cin>>num;
	int *ele = new int[num];
	for(int k = 0 ; k < num ;k++)
		cin>>ele[k];

		
	bool ins = false;
	int i,j,insertedElement;
	for(i = 0 ; i < num ; i++)
	{
		
		insertedElement = ele[i];
		j = i;
		while( ele[j-1] > insertedElement && j >= 1 )
		{
			//keep on moving the element until we find the correct position for that element.
			ele[j] = ele[j-1];j--;
			ins = true;
		}
		ele[j] = insertedElement;
		if( ins ) {
			for(int p = 0 ; p < num ;p++) {
			cout<<ele[p]<<" "; }
		cout<<endl;
		}
	}

	return 0;
}
