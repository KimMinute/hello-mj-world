/*
this is the solution of beakjoon #2667
https://www.acmicpc.net/problem/2667
*/
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int A[26][26];
int check[26][26];
int ans[26*26];

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

int main(){
	int n;
	queue<pair<int,int>> q;
	
	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&A[i][j]); //have to check 1d 
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(A[i][j]==1&&check[i][j]==0){
					q.push(make_pair(i,j));
					check[i][j]=++cnt;
					while(!q.empty()){
						int x=q.front().first;
						int y=q.front().second;
						q.pop();
						for(int k=0;k<4;k++){
							int nx=x+dx[k];
							int ny=y+dy[k];
							if(0<=nx && nx<n && 0<=ny && ny<n){
								if(A[nx][ny]==1&&check[nx][ny]==0){
									q.push(make_pair(nx,ny));
									check[nx][ny]=cnt;
								}
							}
						}
					}
			}
		}
	}
		
	/*
	cout<<"check check array data"<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",check[i][j]);
		}
		printf("\n");
	}	
	*/
	
	//cout<<"check num of apartment"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(check[i][j]!=0){
				ans[check[i][j]]++;
			}	
		}
	}
	
	cout<<cnt<<'\n';

	sort(ans+1,ans+cnt+1);
	for(int i=1;i<=cnt;i++){
		printf("%d\n",ans[i]);
	}

	return 0;
}
