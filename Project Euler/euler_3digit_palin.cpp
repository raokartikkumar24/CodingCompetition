#include<iostream>
#include<stdio.h>
#include<string>
#include<string.h>
#include<fstream>
typedef long long LL;

//http://leetcode.com/2012/01/palindrome-number.html
bool isPalindrome(int x, int &y) {
  if (x < 0) return false;
  if (x == 0) return true;
  if (isPalindrome(x/10, y) && (x%10 == y%10)) {
    y /= 10;
    return true;
  } else {
    return false;
  }
}

bool ispalin(int x)
{
	return isPalindrome(x,x);
}


int main()
{
	LL n;
	int i = 999, j = 999;
	ofstream palinN("palindromes.txt");
	for(int i = 999; i>99;i--)
	{
		for(int j = 999; j>99;j--)
		{
			if( ispalin( i * j ) )
			{
				//cout<<i<<" "<<j<<" "<<(i * j )<<endl;
				palinN<<(i*j)<<endl;
				
			}
		}
	}
	
	return 0;

}