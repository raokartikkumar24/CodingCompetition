#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


void addNumber(int number, priority_queue<int> &lowers, priority_queue<int,std::vector<int>, std::greater<int> > &highers){
    if(lowers.empty() || number < lowers.top())
        lowers.push(number);
    else
        highers.push(number);
}

void rebalance(priority_queue<int> &lowers, priority_queue<int,std::vector<int>, std::greater<int> > &highers){
    int lowerLength = lowers.size();
    int higherLength = highers.size();
  
    if(abs(lowerLength-higherLength) >= 2){
        if(lowerLength < higherLength){
            lowers.push(highers.top());
	    highers.pop();
        }
        else {
            highers.push(lowers.top());
            lowers.pop();
        }
    }
}

double getMedian(priority_queue<int> &lowers, priority_queue<int,std::vector<int>, std::greater<int> > &highers){
     int lowerLength = lowers.size();
     int higherLength = highers.size();
        
     if(lowerLength == higherLength){
	int sum = lowers.top() + highers.top();
	double median = (double)sum/2;
	return median;
     }
    else {
        if(lowerLength > higherLength)
            return(double) lowers.top();
        else
            return (double)highers.top();
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    priority_queue<int> lowers; //root is the max of all elements
    priority_queue<int, std::vector<int>, std::greater<int> > highers; //root is min of all the elements
    double median = 0.0;
    for(int a_i = 0;a_i < n;a_i++){
         cin >> a[a_i];
        
        addNumber(a[a_i],lowers,highers);
        rebalance(lowers,highers);
        median = getMedian(lowers,highers);
      	printf("%.1f \n",median);  
    }
    
    
    return 0;
}

