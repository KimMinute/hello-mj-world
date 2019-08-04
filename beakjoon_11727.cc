/*
this code is the solution of beakjoon #11727
please refer below url for checking problem, condition and example input/output
https://www.acmicpc.net/problem/11727
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
 	int dp[1001];
	int num;
	dp[1]=1;
	dp[2]=3;
	dp[3]=5;
	
	cin>>num;
	for(int i=4;i<=num;i++){
		dp[i]=(dp[i-1]+2*dp[i-2])%10007;
	}
	
	cout<<dp[num]<<endl;
	
}
