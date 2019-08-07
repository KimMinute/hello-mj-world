/*
this is the solution of #10989
https://www.acmicpc.net/problem/10989
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int cnt[10001];

int main(){
	int n;
	int temp;
    scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		cnt[temp]++;
	}
	
	for(int i=1;i<=10000;i++){
		if(cnt[i]>0){
			for(int j=0;j<cnt[i];j++){
				printf("%d\n",i);
			}
		}
	}
	
		
	return 0;
}
