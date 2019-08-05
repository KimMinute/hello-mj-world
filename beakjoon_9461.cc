/*
this code is the solution of beakjoon #9461
https://www.acmicpc.net/problem/9461
*/
#include<iostream>
#include<algorithm>

using namespace std;
long long int dp[101];

int main(){
	int T;
	int num;
	
	dp[0]=0;
	dp[1]=1;
	dp[2]=1;
	dp[3]=1;
	dp[4]=2;
	dp[5]=2;
	
	cin>>T;
	
	for(int k=0;k<T;k++){
		cin>>num;
		
		for(int i=6;i<=num;i++){
			dp[i]=dp[i-1]+dp[i-5];
		}
		
		printf("%lld\n",dp[num]);
	}
	
	return 0;
}
