/*
this is the solution of beakjoon #2011
https://www.acmicpc.net/problem/2011
*/
#include<iostream>
#include<string>

using namespace std;

int dp[5001];
int mod=1000000;

int main(){
	string s;
	cin>>s;
	
	int num=s.size();
	
	dp[0]=1;
	
	for(int i=1;i<=num;i++){
		int x=s[i-1]-'0';
		//cout<<"i:"<<i<<",x:"<<x<<endl;
		if(x>=1&&x<=9){
			dp[i]+=dp[i-1];
			dp[i]%=mod;
		}
		if(i==1) continue;
		if(s[i-2]=='0') continue;
		
		int y=(s[i-2]-'0')*10+s[i-1]-'0';
		if(y>=10&&y<=26){
			dp[i]+=dp[i-2];
			dp[i]%=mod;		
		}
	}
	cout<<dp[num]<<endl;
}
