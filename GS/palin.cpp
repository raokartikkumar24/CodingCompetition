#include <iostream>
#include <string>

using namespace std;

/****
Just append the string from length/2
wont give shortest palindrome
*****/
void method1(string in)
{
	string palin = in;

	for(int i = in.length()/2 ; i >= 0 ;i--)
		palin += in[i];

	cout<<palin<<endl;
}

int main()
{
	
	string input;
	cin>>input;

	int i = 0 ;
	int j = input.length()-1;

	int val = 0;
	for(;i<input.length()/2;i++,j--)
		val += (input[i]-input[j]);

	if(val == 0)
		cout<<input;
	else
		method1(input);


	return 0;
}