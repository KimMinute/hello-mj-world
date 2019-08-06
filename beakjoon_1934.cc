/*
this is the solution of #1934
https://www.acmicpc.net/problem/1934
*/
#include<iostream>
using namespace std;

int gcd(int a,int b){
	if(b==0) return a;
	else{
		return gcd(b,a%b);
	}
}

int main(){
	int g;
	long long int l;
	int T;
	
	cin>>T;
	for(int i=0;i<T;i++){
			int x,y;
			cin>>x>>y;
			g=gcd(x,y);
			l=x*y/g;
			cout<<l<<endl;
	}
	
	
	return 0;
}
