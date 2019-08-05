/*
this is the solution of beakjoon #2133
https://www.acmicpc.net/problem/2133
*/
#include<iostream>
#include<algorithm>

using namespace std;
int dp[31];

int main(){
	int num;
	cin>>num;
	
	dp[0]=1;
	
	for(int i=2;i<=num;i+=2){
		dp[i]=3*dp[i-2];
		for(int j=i-4;j>=0;j-=2){
			dp[i]+=2*dp[j];
		}
	}
	int res=dp[num];
	cout<<res<<endl;
	return 0;
}

