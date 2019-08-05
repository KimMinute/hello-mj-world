/*
this code is the solution of beakjoon #1699
https://www.acmicpc.net/problem/1699
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int num;
	int dp[100001];

	cin>>num;
	
	for(int i=1;i<=num;i++){
		dp[i]=i;
		for(int j=1;i>=j*j;j++){
			if(dp[i]>dp[i-j*j]+1){
				dp[i]=dp[i-j*j]+1;
			}
		}
	}
	
	cout<<dp[num]<<endl;
}
