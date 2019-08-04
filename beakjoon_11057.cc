/*
this is the solution of beakjoon #11057
please refer below url for checking #11057
https://www.acmicpc.net/problem/11057
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int dp[1001][10];
	int num;
	
	cin>>num;
	
	for(int i=0;i<10;i++){
		dp[1][i]=1;
	}
	
	for(int i=2;i<=num;i++){
		for(int j=0;j<=9;j++){
            dp[i][j]=0;            
			for(int k=0;k<=j;k++){
				dp[i][j]+=dp[i-1][k];
			}
            dp[i][j]%=10007;
		}
	}
	long long int ans=0;
	for(int i=0;i<=9;i++){
		ans+=dp[num][i];
	}
	ans%=10007;
	cout<<ans<<endl;
}
