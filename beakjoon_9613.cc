/*
this is the solution fo beakjoon #9613
https://www.acmicpc.net/problem/9613
*/
#include<iostream>
using namespace std;

int a[100];

int gcd(int a,int b){
	if(b==0) return a;
	else{
		return gcd(b,a%b);
	}
}

int main(){
	int T;
	cin>>T;
    
	for(int i=0;i<T;i++){
		int num=0;
		long long int sum=0;
		cin>>num;
		for(int j=0;j<num;j++){
			cin>>a[j];
		}
		for(int k=0;k<num-1;k++){
			for(int l=k+1;l<num;l++){
				sum+=gcd(a[k],a[l]);
			}
		}
		cout<<sum<<endl;	
	}
	return 0;
}
