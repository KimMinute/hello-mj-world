/*
This code is solution of beakjoon #1463
please refer below url for checking this problem
https://www.acmicpc.net/problem/1463
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int num;
	int dp[1000000];
	
	cin>>num;
	
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	
	for(int i=4;i<=num;i++){
		int temp;
		if((i%3==0)&&(i%2==0)){
		//	cout<<"dp1"<<endl;
			temp=min(dp[i/3],dp[i/2]);
		}else if((i%3==0)&&(i%2!=0)){
		//	cout<<"dp2"<<endl;
			temp=dp[i/3];
		}else if((i%3!=0)&&(i%2==0)){
		//	cout<<"dp3"<<endl;			
			temp=dp[i/2];			
		}else{
			temp=dp[i-1];
		}
			dp[i]=min(temp,dp[i-1])+1;
			//cout<<"dp_"<<i<<":"<<dp[i]<<endl;
		}
	cout<<dp[num]<<endl;
}
