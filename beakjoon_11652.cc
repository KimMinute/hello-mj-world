/*
this is the solution of #11652
https://www.acmicpc.net/problem/11652
*/
#include <iostream>
#include <algorithm>

using namespace std;
long long int a[1000001];

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	
	sort(a,a+n);
	
	int cnt=1;
	int ans=0;
	long long int temp=a[0];
	
	/*
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	*/
	
	for(int i=1;i<n;i++){
		if(a[i-1]!=a[i]){
			cnt=1;
		}else{
			cnt++;
		}
		if(cnt>ans){
			ans=cnt;
			temp=a[i-1];
		}
	}
		printf("%lld",temp);
	
	//cout<<"num:"<<temp<<endl;
	//cout<<"cnt:"<<ans<<endl;
	
	return 0;
}
