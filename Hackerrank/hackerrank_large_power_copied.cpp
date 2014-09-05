#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
//#include<bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int A[100009];
int B[100009];

long long int expn(long long int N, long long int K)
{
    if(K==0) return 1;
    if(K==1) return N%MOD;
    if(K%2 ==0)
    {
        long long int temp = expn(N,K/2);
        return (temp*temp)%MOD;
    }
    else
    {
        long long int temp = expn(N,K/2);
        temp = (temp*temp)%MOD;
        return (temp*N)%MOD;
    }
}

int main()
{
    int T,i;
    string str1,str2;
    cin>>T;
    //assert(1<=T);
     //assert(T<=10);
    while(T--)
    {
        long long int M = 1000000007;
    long long int N = 1000000006;
    long long int temp1,temp2;

    cin>>str1>>str2;

        for(i=0 ; i<str1.length() ;i++)
        {
            A[i] = str1[i] - '0' ;
        }
    for(i=0 ; i<str2.length() ;i++)
        {
            B[i] = str2[i] - '0' ;
        }
        /*assert(str1[0]!='0');
        assert(str2[0]!='0');
        assert(str1.length() <=100000);
        assert(str2.length() <= 100000);*/

        temp1 = A[0] % M;
        for(i=1 ; i< str1.length() ; i++)
        {
            temp1 = (10*temp1 + A[i] )% M; 
        }

    temp2 = B[0] % N;
        for(i=1 ; i< str2.length() ; i++)
        {
            temp2 = (10*temp2 + B[i] )% N; 
        }
    //cout<<temp1<<" "<<temp2<<endl;
        cout<<expn(temp1,temp2)<<endl;
    }
   return 0;
}