/*
this code is the solution of beakjoon #11052
please refer below url for checking problem, condition and example input/output
https://www.acmicpc.net/problem/11052
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
 	int dp[1001]; //max value
	int p[1001]; //value of card
	int num; //number of card 
	
	cin>>num;
	for(int i=1;i<=num;i++){
		cin>>p[i];
	}
	
	dp[1]=p[1];
	int temp;
	int temp_max;
	
	for(int i=2;i<=num;i++){
		temp_max=p[i];
		for(int j=1;j<i;j++){
			temp=dp[j]+p[i-j];
			if(temp>temp_max){
				temp_max=temp;
			}
			dp[i]=temp_max;
		}
	}
	
	cout<<dp[num]<<endl;
}
