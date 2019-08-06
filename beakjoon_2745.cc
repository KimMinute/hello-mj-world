/*
this is the solution of #2745
https://www.acmicpc.net/problem/2745
*/

#include<iostream>
#include<stack>
#include<string>

using namespace std;
long long int res=0;

int main(){
	
	int B;
	string s;
	
	cin>>s>>B;
	int num=s.size();
	
	for(int i=0;i<num;i++){
		int x;
		if(s[i]>='A'&&s[i]<='Z'){
			x=s[i]-'A'+10;
		}else{
			x=s[i]-'0';
		}
		//cout<<"i:"<<i<<", x:"<<x<<endl;
		for(int j=0;j<num-i-1;j++){
			//cout<<"j:"<<j<<endl;
			x*=B;
		}
		//cout<<"i:"<<i<<", final x:"<<x<<endl;
		res+=x;
	}
		cout<<res<<endl;

	return 0;
}
