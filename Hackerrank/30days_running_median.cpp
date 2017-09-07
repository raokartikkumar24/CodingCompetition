#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


void addNumber(int number, priority_queue<int> &lowers, priority_queue<int,std::vector<int>, std::greater<int>> &highers){
    if(lowers.empty() || number < lowers.top())
        lowers.emplace(number);
    else
        highers.emplace(number);
}

void rebalance(priority_queue<int> &lowers, priority_queue<int,std::vector<int>, std::greater<int>> &highers){
    int lowerLength = lowers.size();
    int higherLength = highers.size();
  
    if(abs(lowerLength-higherLength) >= 2){
        if(lowerLength < higherLength){
            lowers.emplace(highers.top());
        }
        else {
            highers.emplace(lowers.top());
        }
    }
}

double getMedian(priority_queue<int> &lowers, priority_queue<int,std::vector<int>, std::greater<int>> &highers){
     int lowerLength = lowers.size();
     int higherLength = highers.size();
        
     if(lowerLength == higherLength){
         return (double)((lowers.top() + highers.top()) / 2);
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
    priority_queue<int, std::vector<int>, std::greater<int>> highers; //root is min of all the elements
    double median = 0.0;
    for(int a_i = 0;a_i < n;a_i++){
         cin >> a[a_i];
        
        addNumber(a[a_i],lowers,highers);
        rebalance(lowers,highers);
        median = getMedian(lowers,highers);
        
        cout << median << endl;
    }
    
    
    return 0;
}

