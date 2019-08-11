/*
this is the solution of beakjoon #10451
https://www.acmicpc.net/problem/10451
*/
#include <iostream>
#include <vector>

using namespace std;
vector<int> a[1001];
int check[1001];

void dfs(int x){
	check[x]=1;
	int next=a[x][0];
	if(check[next]==0){
		dfs(next);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		a[i].clear();
		check[i]=0;
	}
	
	for(int i=1;i<=n;i++){
		int u;
		scanf("%d",&u);
		a[i].push_back(u);
	}
	
	
	int cnt=0;
	
	for(int i=1;i<=n;i++){
		if(check[i]==0){
			cnt++;
			dfs(i);
		}
	}
	
	printf("%d\n",cnt);
	}
	return 0;
}
