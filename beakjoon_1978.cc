/*
this code is the solution of #1978
https://www.acmicpc.net/problem/1978
*/
#include <iostream>

using namespace std;

int a[101];

bool prime(int n){
	if(n<2) return false;
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0) return false;
		}
	}
	return true;
}

int main(){
	int num;
	int sum=0;
	cin>>num;
	
	for(int i=0;i<num;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<num;i++){
		bool is_prime=false;
		is_prime=prime(a[i]);
		
		if(is_prime){
			sum++;
		}
	}
	
	cout<<sum<<endl;
}
