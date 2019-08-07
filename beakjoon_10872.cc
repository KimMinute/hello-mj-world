/*
this is the solution of #10872
https://www.acmicpc.net/problem/10872
*/
#include <iostream>

using namespace std;

int main(){
	int n;
	int fac=1;
	
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		fac*=i;
	}
	cout<<fac<<endl;
	return 0;
}
