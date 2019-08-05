/*
this code is the solution of beakjoon #1912
https://www.acmicpc.net/problem/1912
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int A[100001];
	int D[100001];
	int num;

	cin>>num;
	for(int i=1;i<=num;i++){
		cin>>A[i];
	}
	
	D[1]=A[1];
	for(int i=2;i<=num;i++){
		D[i]=A[i];
		if(D[i]<D[i-1]+A[i]){
			D[i]=D[i-1]+A[i];
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
