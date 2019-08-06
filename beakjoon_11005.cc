/*
this code is the solution of #11005
https://www.acmicpc.net/problem/11005
*/
#include<iostream>
#include<stack>

using namespace std;

int main(){
	
	long long int N;
	int B;
	stack<int> st;
	
	cin>>N>>B;
	while(N/B!=0){
		//cout<<"N/B: "<<N/B<<endl;
		//cout<<"N%B: "<<N%B<<endl;
		st.push(N%B);
		N=N/B;
	}

	st.push(N%B);

	while(!st.empty()){
		//cout<<st.top()<<endl;
		int temp=st.top();
		if(temp>=10){
			temp+=55;
			printf("%c",temp);
		}else{
			printf("%d",temp);
		}
		st.pop();
	}
	
	//char c='A';
	//printf("%d\n",c);
	return 0;
}
