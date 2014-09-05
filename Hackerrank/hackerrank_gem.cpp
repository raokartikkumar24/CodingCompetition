// hackerrank.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<iostream>
#include<string>
using namespace std;

int main()
{

	int ap[26] = { 0 };
	
	int N;
	cin>>N;
	int temp = N;
	string input;
	int c=0;
	while( N-- )
	{
		int alpha[26] = { 0 };
		cin>>input;
		for(int i = 0 ; i < input.length(); i++ ,c++)
					alpha[input[i] - 'a']++;

		for(int j = 0 ; j < 26; j++ )
		{

				if( alpha[j] > 0 )
					ap[j]++;
		}
	
	}
	
	int count = 0;
	
	for(int k = 0; k < 26; k++ )
	{
			if( ap[k] == temp)
				count++;
	}
	 
	 cout<<count<<endl;
	 return 0;

}

