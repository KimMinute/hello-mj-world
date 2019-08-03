/*
this code is the solution of beakjoon #10799.
please refer below url for checking problem.
https://www.acmicpc.net/problem/10799
*/
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	string vp;
	stack<int> st;
	int cnt=0;
	int num=0;
	cin>>vp;
	
	
	for(int i=0;i<vp.size();i++){
		if(vp[i]=='('){
			st.push(1);
			num++;
		}else if(vp[i]==')'){
			if(vp[i-1]=='('){
				st.pop();
				//--num;
				//cnt+=num;
				cnt+=st.size();
			}else{
				st.pop();
				//--num;
				cnt+=1;
			}	
		}
	}
	
	cout<<cnt<<endl;
	
}
