/*
this code is the solution of beakjoon #10844
please refer below url for checking #10844
https://www.acmicpc.net/problem/10844
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int dp[101][10];
	int num;
	
	cin>>num;
	
	for(int i=1;i<10;i++){
		dp[1][i]=1;
	}
	
	for(int i=2;i<=num;i++){
		for(int j=1;j<=8;j++){
			dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%1000000000;
			//dp[i][j]=dp[i-1][j-1]+dp[i-1][j+1];            
		}
		dp[i][0]=dp[i-1][1];
		dp[i][9]=dp[i-1][8];
	}
	long long int ans=0;
	for(int i=0;i<=9;i++){
		ans+=dp[num][i];
	}
	ans%=1000000000;
	cout<<ans<<endl;
}
