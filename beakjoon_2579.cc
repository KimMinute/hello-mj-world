/*
this code is the solution of #2579
https://www.acmicpc.net/problem/2579
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int A[301];
	int D[301][3];
	int num;

	cin>>num;
	for(int i=1;i<=num;i++){
		cin>>A[i];
	}
	
	D[0][1]=0;
	D[0][2]=0;
	D[1][1]=A[1];
	D[1][2]=A[1];
	
	for(int i=2;i<=num;i++){
		D[i][1]=max(D[i-2][1],D[i-2][2])+A[i];
		D[i][2]=D[i-1][1]+A[i];
	}
	
	int res=0;
	res=max(D[num][1],D[num][2]);
	cout<<res<<endl;
}
