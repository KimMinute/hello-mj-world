/*
this code is the solution of beakjoon #11055
you can refer below url for checking this problem, condition and example input/output
https://www.acmicpc.net/problem/11055
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
		D[i]=A[i];
		for(int j=1;j<i;j++){
			if(A[i]>A[j]&&D[i]<D[j]+A[i]){
				D[i]=D[j]+A[i];
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
