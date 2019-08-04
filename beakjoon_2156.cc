/*
this is the solution of beakjoon #2156
you can refer below url for checking problem, condition and example input/output
https://www.acmicpc.net/problem/2156
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int num;
	int dp[10001][3];
	int A[10001];
	
	cin>>num;
	for(int i=1;i<=num;i++){
		cin>>A[i];
	}
	
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	
	for(int i=1;i<=num;i++){
		dp[i][0]=max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
		dp[i][1]=dp[i-1][0]+A[i];
		dp[i][2]=dp[i-1][1]+A[i];
	}
	int res=0;
	res=max(dp[num][0],max(dp[num][1],dp[num][2]));
	cout<<res<<endl;
}
