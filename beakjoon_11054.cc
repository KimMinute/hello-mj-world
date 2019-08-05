/*
this is solution of beakjoon #11054
https://www.acmicpc.net/problem/11054
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int A[1001];
	int D[1001];
	int E[1001];
	int num;
	
	cin>>num;
	for(int i=1;i<=num;i++){
		cin>>A[i];
	}
	
	for(int i=1;i<=num;i++){
		D[i]=1;
		for(int j=1;j<i;j++){
			if(A[i]>A[j]&&D[i]<D[j]+1){
				D[i]=D[j]+1;
			}
		}
	}
	
	
	for(int i=num;i>0;i--){
		E[i]=1;
		for(int j=num;j>i;j--){
			if(A[i]>A[j]&&E[i]<E[j]+1){
				E[i]=E[j]+1;
			}
		}
	}	
	
	int temp_max=D[1]+E[1]-1;
	for(int i=2;i<=num;i++){
		if(temp_max<D[i]+E[i]-1){
			temp_max=D[i]+E[i]-1;
		}
	}
	/*
	cout<<"D[i]"<<endl;
	for(int i=1;i<=num;i++){
		cout<<D[i]<<" ";
	cout<<endl;
	
	cout<<"E[i]"<<endl;
	for(int i=1;i<=num;i++){
		cout<<E[i]<<" ";
	}	
	cout<<endl;
	*/
	
	cout<<temp_max<<endl;
	
}
