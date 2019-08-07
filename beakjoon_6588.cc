/*
this is the solution of #6588
https://www.acmicpc.net/problem/6588
*/
#include <iostream>

using namespace std;

bool prime[1000001];

int main(){
	int n;
	
	for(int i=2;i<1000001;i++){
		if(prime[i]==false){
			for(int j=i*2;j<1000001;j+=i){
				prime[j]=true;
			}	
		}
	}
	
	while(true){
		scanf("%d",&n);
		
		if(n==0){
			break;
		}
		
		for(int i=2;i<n;i++){
			if(prime[i]==false&&prime[n-i]==false){
				printf("%d = %d + %d\n",n,i,n-i);
				break;
			}
		}
		
	}
	
	
	return 0;
}
