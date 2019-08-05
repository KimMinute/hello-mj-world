/*
this is the solution of beakjoon#11722
https://www.acmicpc.net/problem/11722
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int A[1001];
	int D[1001];
	int num;
	
	cin>>num;
	for(int i=1;i<=num;i++){
		cin>>A[i];
	}
	
	for(int i=1;i<=num;i++){
		D[i]=1;
		for(int j=1;j<i;j++){
			if(A[i]<A[j]&&D[i]<D[j]+1){
				D[i]=D[j]+1;
			}
		}
	}
	
	int temp_max=D[1];
	for(int i=2;i<=num;i++){
		if(temp_max<D[i]){
			temp_max=D[i];
		}
	}	
	
	cout<<temp_max<<endl;
	
}
