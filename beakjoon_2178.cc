/*
this is the solution of beakjoon #2178
https://www.acmicpc.net/problem/2178
*/
#include <iostream>
#include <queue>

using namespace std;

int A[101][101];
int check[101][101];

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

int main(){
	int n,m;
	queue<pair<int,int>> q;
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%1d",&A[i][j]);	
		}
	}
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(A[i][j]==1&&check[i][j]==0)
				if(i==0&&j==0){
					check[i][j]=1;
				}
				q.push(make_pair(i,j));
			while(!q.empty()){
				int x=q.front().first;
				int y=q.front().second;
				q.pop();
				for(int k=0;k<4;k++){
					int nx=x+dx[k];
					int ny=y+dy[k];
					if(0<=nx && nx<n && 0<=ny && ny<m){
						if(A[nx][ny]==1&&check[nx][ny]==0){
							q.push(make_pair(nx,ny));
							check[nx][ny]=check[x][y]+1;
						}
					}
				}
			}
		}
		
	}
	
	printf("%d\n",check[n-1][m-1]);
	
	/*
	cout<<"check check data"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",check[i][j]);	
		}
		printf("\n");
	}	
	*/
	return 0;
}
