/*
this is the solution of #11650
https://www.acmicpc.net/problem/11650
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
		scanf("%d %d",&a[i].first,&a[i].second);	
	}	
	
	sort(a.begin(),a.end());

	for(int i=0;i<n;i++){
		printf("%d %d\n",a[i].first,a[i].second);	
	}	
	
	return 0;
}
