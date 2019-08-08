/*
this is the solution of #1260
https://www.acmicpc.net/problem/1260
*/
#include <iostream>
#include <queue>

using namespace std;

int n,m,k;
int a[1001][1001];
bool check1[1001];
bool check2[1001];

void input_data(){
	scanf("%d %d %d",&n,&m,&k);	
	for(int i=1;i<=m;i++){
		int u,v;
		scanf("%d %d",&u,&v);
		a[u][v]=a[v][u]=1;
	}
}

void dfs(int x){
	check1[x]=true;
	printf("%d ",x);
	for(int i=1;i<=n;i++){
		if(check1[i]==false&&a[x][i]==1){
			check1[i]=true;
			dfs(i);
		}
	}
}

void bfs(int l){
	queue<int> q;
	check2[l]=true;
	q.push(l);
	while(!q.empty()){
		int x=q.front();
		printf("%d ",x);
		q.pop();
		for(int i=1;i<=n;i++){
			if(check2[i]==false&&a[x][i]==1){
				q.push(i);				
				check2[i]=true;
			}
		}
	}
}


int main(){
	input_data();
	dfs(k);
	printf("\n");
	bfs(k);
	return 0;
}
