/*
this is the solution of #1377
https://www.acmicpc.net/problem/1377
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	
	vector<pair<int,int>> a(n);
	
	for(int i=0;i<n;i++){
			cin>>a[i].first;
		  a[i].second=i;
	}
	
	sort(a.begin(),a.begin()+n);
	
	//test print
	int ans=0;
	int temp=0;
	
	for(int i=0;i<n;i++){
		//printf("first: %d second: %d\n",a[i].first,a[i].second);
		if(i<a[i].second){
			temp=a[i].second-i;
		}
		if(temp>ans){
			ans=temp;
		}
	}
	
	printf("%d\n",ans+1);
	
	
	return 0;
}
