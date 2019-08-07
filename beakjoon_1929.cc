/*
this is the solution of beakjoon #1929
https://www.acmicpc.net/problem/1929
*/
#include <iostream>

using namespace std;
bool is_prime[1000001];

int main(){
	int m,n;
	cin>>m>>n;
	
	is_prime[0]=true;
	is_prime[1]=true;

	for(int i=2;i<=n;i++){
		if(is_prime[i]==false){
			for(int j=2*i;j<=n;j+=i){
				is_prime[j]=true;
			}
		}
	}
	
	
	for(int i=m;i<=n;i++){
		if(is_prime[i]==false){
			printf("%d\n",i);
		}
		
	}
	
	
	
	
}
