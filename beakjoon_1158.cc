/*
this code is the solution of beakjoon #1158.
please refer belowo url for checking problem.
https://www.acmicpc.net/problem/1158
*/
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	queue<int> q;
	queue<int> res;
	int N,M;
	
	cin>>N>>M;
	
	for(int i=1;i<=N;i++){
		q.push(i);
	}
	
	while(!q.empty()){
		for(int i=0;i<M-1;i++){
			int temp=q.front();
			q.push(temp);
			q.pop();
		}
			res.push(q.front());
			q.pop();
	}
	
	int result_len=res.size();
	cout<<"<";
	for(int i=0;i<result_len;i++){
		cout<<res.front();
		res.pop();
		if(i!=result_len-1){
	cout<<", ";}
	}
	cout<<">";
}
