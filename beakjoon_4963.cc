/*
this is the solution of beakjoon #4963
https://www.acmicpc.net/problem/4963
*/
#include <iostream>
#include <queue>

using namespace std;

int dx[8]={0,0,1,1,1,-1,-1,-1};
int dy[8]={1,-1,0,1,-1,0,1,-1};

int check[51][51];
int A[51][51];

int main(){
	
	while(true){
		int n,m;

		queue<pair<int,int>> q;
		
		cin>>m>>n;
		if(n==0&&m==0) break;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				A[i][j]=0;
				check[i][j]=0;
			}
		}		
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&A[i][j]);
			}
		}
		
		int cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(A[i][j]==1&&check[i][j]==0){
					q.push(make_pair(i,j));
					check[i][j]=++cnt;
					while(!q.empty()){
						int x=q.front().first;
						int y=q.front().second;
						q.pop();
						for(int k=0;k<8;k++){
							int nx=x+dx[k];
							int ny=y+dy[k];
							if(0<=nx && nx<n && 0<=ny && ny<m){
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
		cout<<cnt<<endl;
		/*
		cout<<"check input data"<<endl;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				printf("%d ",A[i][j]);
			}
			printf("\n");
		}
		*/
	}
	
	return 0;
}
