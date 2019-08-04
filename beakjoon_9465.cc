/*
this code is the solution of beakjoon #9465
please refer to below url for checking problem, condition, and example input/output
https://www.acmicpc.net/problem/9465
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int T; //number of tastcases
	int dp[100001][3];
	int a[100001][3];	
	int n;
	
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>n;
		
		for(int j=1;j<=2;j++){
			for(int k=1;k<=n;k++){
				cin>>a[k][j];
			}
		}
		
		dp[0][0]=0;
		dp[0][1]=0;
		dp[0][2]=0;
		
		for(int l=1;l<=n;l++){
			dp[l][0]=max(dp[l-1][0],max(dp[l-1][1],dp[l-1][2]));
			dp[l][1]=max(dp[l-1][0],dp[l-1][2])+a[l][1];
			dp[l][2]=max(dp[l-1][0],dp[l-1][1])+a[l][2];
		}
		
		int ans=max(dp[n][0],max(dp[n][1],dp[n][2]));
		cout<<ans<<endl;
	}
	
	
}
