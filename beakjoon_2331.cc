/*
this is the solution of beakjoon #2331
https://www.acmicpc.net/problem/2331
*/
#include <iostream>

using namespace std;

int check[1000000];

int pow(int x, int p){
	int ans=1;
	for(int i=0;i<p;i++){
		ans*=x;
	}
	return ans;
}

int next(int a, int p){
	int ans=0;
	while(a>0){
		ans+=pow(a%10,p);	
		a=a/10;
	}
	return ans;
}

int length(int a, int p, int cnt){
	//cout<<"a:"<<a<<", cnt:"<<cnt<<endl;
	if(check[a]!=0){
		//cout<<"a:"<<a<<", check[a]:"<<check[a]<<", not zero!!"<<endl;
		return (check[a]-1);
	}
	
	check[a]=cnt;
	//cout<<"check[a]:"<<check[a]<<endl;	
	int b = next(a,p);
	return length(b,p,cnt+1);
}


int main(){
	int a,p;
	int temp_res=0;
	cin>>a>>p;
	
	temp_res=length(a,p,1);
	cout<<temp_res<<endl;
	return 0;
}
