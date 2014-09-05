#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main()
{

	string input;
	
	getline(cin,input);
	
	int len = input.length();
	
	cout<<len<<endl;
	
	int col = (int)ceil(sqrt(len));
	
	cout<<"Col :"<<col<<endl;
	
	int row =(int)floor(sqrt(len));
	
	cout<<"Row :"<<row<<endl;
	
	if( ( row*col ) < len )
			row = row+1;
			
	int c = 0;
	 cout<<row<<" "<<col<<endl;
	
	char **arr = NULL;
	
	arr = new char*[row];
	
	for(int i = 0; i < row ;i++)
		arr[i] = new char[col];
		
	for(int i = 0 ; i < row; i++)
		for(int j = 0 ; j < col ;j++)
			arr[i][j] = '-';
			
	for(int i = 0 ; i < row; i++) {
	  for(int j = 0 ; j < col ;j++) {
		 cout<<arr[i][j]<<" "; }
		 cout<<endl;
		 }
		
	
		for(int i = 0 ; i < row; i++)
		for(int j = 0 ; j < col ;j++)
			arr[i][j] = input[c++];
	
	for(int i = 0 ; i < row; i++) {
	  for(int j = 0 ; j < col ;j++) {
		 cout<<arr[i][j]<<" "; }
		 cout<<endl;
		 }
		
		for(int i = 0 ; i < col; i++) {
		for(int j = 0 ; j < row ;j++) {
			if( arr[j][i] != '-' ) {
				cout<<arr[j][i];  }
		}
		cout<<" ";
		}
	
	return 0;


}