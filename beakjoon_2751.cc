/*
this is the solution of beakjoon #2751
https://www.acmicpc.net/problem/2751
*/
#include <iostream>
#include <algorithm>
using namespace std;
int A[1000001];

int main(){
	int n;
    scanf("%d\n",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d\n",&A[i]);	
	}
	
	sort(A,A+n);
	
	for(int i=0;i<n;i++){
		printf("%d\n",A[i]);
	}
	
	
	return 0;
}
