/*
this is the solution of #11724
https://www.acmicpc.net/problem/11724
*/
#include <iostream>

using namespace std;

int n,m;
int A[1001][1001];
int check[1001];

void input_data(){
	scanf("%d %d",&n,&m);	
	for(int i=0;i<m;i++){
		int u,v;
		scanf("%d %d",&u,&v);
		A[u][v]=A[v][u]=1;
	}
}

void dfs(int x){
	check[x]=true;
	for(int i=1;i<=n;i++){
		if((A[x][i]==1)&&(check[i]==false)){
		check[i]=true;
		dfs(i);
		}
	}
}

int main(){
	int cnt=0;
	input_data();
	for(int i=1;i<=n;i++){
		if(check[i]==false){
			cnt++;
			//cout<<"dfs i:"<<i<<'\n';
			dfs(i);
		}
	}
	printf("%d\n",cnt);
	return 0;
}
