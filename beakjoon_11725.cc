/*
this is the solution of beakjoon #11725
https://www.acmicpc.net/problem/11725
*/
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> a[100001];

int check[100001];
int depth[100001];
int parent[100001];

queue<int> q;

int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	
	parent[1]=0;
	depth[1]=0;
	check[1]=1;
	q.push(1);
	
	while(!q.empty()){
		int x=q.front();
		q.pop();
		
		for(int y:a[x]){
			if(check[y]==0){
				parent[y]=x;
				depth[y]=x+1;
				check[y]=1;
				q.push(y);
			}
		}
	}
	
	for(int i=2;i<=n;i++){
		cout<<parent[i]<<'\n';
	}
	
	return 0;
}
