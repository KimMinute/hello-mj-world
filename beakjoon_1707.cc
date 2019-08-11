/*
this is the solution of beakjoon #1707
https://www.acmicpc.net/problem/1707
*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> a[20001];
int check[20001];

void dfs(int node, int c){
	check[node]=c;
	for(int i=0;i<a[node].size();i++){
		int next=a[node][i];
		if(check[next]==0){
		dfs(next,3-c);
		}
	}
}



int main(){
	int t;
	scanf("%d",&t);
	
	for(int l=0;l<t;l++){
		int n,m;
		scanf("%d %d",&n,&m);	
		
		for(int i=1;i<=n;i++){
			a[i].clear();
			check[i]=0;
		}
		
		for(int j=0;j<m;j++){
			int u,v;
			scanf("%d %d",&u,&v);
			a[u].push_back(v);
			a[v].push_back(u);
		}
		
		for(int k=1;k<=n;k++){
			if(check[k]==0){
				dfs(k,1);
			}
		}
		
		
		bool res=true;
		
		for(int p=1;p<=n;p++){
			for(int q=0;q<a[p].size();q++){
				int next=a[p][q];
				if(check[p]==check[next]){
					res=false;
				}
			}
		}
		if(res==true){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		
		
	}
	
	return 0;
}
