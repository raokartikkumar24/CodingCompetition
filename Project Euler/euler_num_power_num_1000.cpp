//Project Euler
//Finding the sum of digits in 2^1000
//Idea is to store the data in array and then apply mulitplication on each of the array index.
//The same as we do multiplication on book ( manuall )
#include<iostream>
#include<cstring>

int max = 5000;

void display(int arr[]){
    int ctr = 0;
	long sum = 0;
    for (int i=0; i<max; i++){
    	if (!ctr && arr[i])	ctr = 1;
    	if(ctr) {
            
			sum+=arr[i];
			std::cout<<arr[i];
			}
    }
	
		//cout<<endl<<sum<<endl;
}


void power(int arr[], int n){
    if (!n) return;
    int carry = 0;
    for (int i=max-1; i>=0; --i){
        arr[i] = (arr[i] * 999) + carry;
        carry = arr[i]/10;
        arr[i] %= 10;
    }
    power(arr,n-1);
}

int main(){
    int *arr = new int[max];
    std::memset(arr,0,max*sizeof(int));
    arr[max-1] = 1;
    int num;
    std::cout<<"Enter the number: ";
    std::cin>>num;
    std::cout<<"2 ^  "<<num<<" is : ";
	power(arr,num);
    display(arr);
    delete[] arr;
		using namespace std;
	cout<<endl;
    return 0;
}


