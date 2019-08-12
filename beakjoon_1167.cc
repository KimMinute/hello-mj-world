/*
this is the solution of beakjoon #1167
https://www.acmicpc.net/problem/1167
*/
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<pair<int,int>> a[100001];

int check[100001];

int long_length=0;
int end_point=0;

void dfs(int x, int len){
	if(check[x]==1){
		return;
	}
	check[x]=1;
	
	if(len>long_length){
		long_length=len;
		end_point=x;
	}
	
	for(int i=0;i<a[x].size();i++){
		dfs(a[x][i].first,a[x][i].second+len);
	}
	
}

int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int u;
		cin>>u;
		while(true){
			int v,w;
			cin>>v;
			if(v==-1){
				break;	
			}else{
			cin>>w;
			a[u].push_back(make_pair(v,w));
			}
		}
	}
	
	dfs(1,0);
	
	long_length=0;
	memset(check,0,sizeof(check));
	
	dfs(end_point,0);
	cout<<long_length<<endl;
	
	return 0;
}
