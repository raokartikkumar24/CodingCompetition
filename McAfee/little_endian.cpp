#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{

	unsigned char data[] = {0,1,2,3,4,5,6,7,8,9};
	unsigned long* pData = ( unsigned long*)data;
	
	printf("data-1 %x \n",data[0]);
	printf("data-2 %x \n",pData[0]);
	
	printf("data-3 %x \n", data[1]);
	printf("data-4 %x \n", pData[1]);
	
	
	return 0;

}