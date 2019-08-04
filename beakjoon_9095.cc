/*
this code is the solution of beakjoon #9095
please refer below url for checking problem, condition and example input/output
https://www.acmicpc.net/problem/9095
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
 	int dp[11];
	int T;
	int num;
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	dp[4]=7;
	
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>num;
		for(int k=4;k<=num;k++){
				dp[k]=dp[k-1]+dp[k-2]+dp[k-3];
		}
		cout<<dp[num]<<endl;
	}
}
