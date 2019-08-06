/*
this code is the solution of #2609
https://www.acmicpc.net/problem/2609
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
	int x,y;
	int g;
	long long int l;
	
	cin>>x>>y;
	
	g=gcd(x,y);
	l=x*y/g;
	
	cout<<g<<endl;
	cout<<l<<endl;
	
	return 0;
}
