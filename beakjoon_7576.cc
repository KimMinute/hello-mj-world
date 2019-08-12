/*
this is the solution of beakjoon #7576
https://www.acmicpc.net/problem/7576
*/
#include <iostream>
#include <queue>

using namespace std;

int A[1001][1001]; // tomato box
int check[1001][1001]; //visit check and count day

int dx[4]={0,0,1,-1};//array dx
int dy[4]={1,-1,0,0};//array dy

int main(){
	int m,n;
	queue<pair<int,int>> q;
	bool all_done=true;
	
	cin>>m>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&A[i][j]);
			
			if(A[i][j]==1){
				q.push(make_pair(i,j));
				check[i][j]=1;
			}else{
				all_done=false;
			}
			
			if(A[i][j]==-1){
				check[i][j]=-1;
			}
			
		}
	}
	
	if(all_done==true){
		printf("0\n");
		return 0;
	}
	
	while(!q.empty()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(0<=nx && nx<n && 0<=ny && ny<m){
				if(A[nx][ny]==0 && check[nx][ny]==0){
					q.push(make_pair(nx,ny));
					check[nx][ny]=check[x][y]+1;
				}	
			}
		}
	}
	
	int temp_max=1;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(check[i][j]==0){
				printf("-1\n");
				return 0;
			}else{
				if(check[i][j]>temp_max){
					temp_max=check[i][j];	
				}
			}
		}
	}
	
	printf("%d\n",temp_max-1);
	
	/*
	cout<<"check array data"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",check[i][j]);
		}
		printf("\n");
	}
	
	*/
	
	return 0;
}
