/*
this code is the solution of beakjoon #11726
please refer below url for checking this problem,condition and example input/output
https://www.acmicpc.net/problem/11726
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
 	int dp[1001];
	int num;
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	
	cin>>num;
	for(int i=4;i<=num;i++){
		dp[i]=(dp[i-1]+dp[i-2])%10007;
	}
	
	cout<<dp[num]<<endl;
	
}
