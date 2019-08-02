/*
problem
: Implement a stack that stores integers, then program process the commands
condition
: 5 commands are given
push,pop(if stack is empty, printout -1),size,empty(if stack is empty print 1, otherwise print 0),top(if stack is empty, printout -1)
Example
-Input
14
push 1
push 2
top
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
top
-Output
2
2
0
2
1
-1
0
1
-1
0
3
*/

#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int> s;
	int T;
	int num;
	string cmd;
	
	cin>>T;
	for(int i=0;i<T;i++){
		cin>>cmd;
		if(cmd=="push"){
			cin>>num;
			s.push(num);
		}else if(cmd=="pop"){
			if(s.empty()){
				cout<<"-1"<<endl;
			}else{
				cout<<s.top()<<endl;
				s.pop();
			}
		}else if(cmd=="size"){
			cout<<s.size()<<endl;
		}else if(cmd=="empty"){
			if(s.empty()){
				cout<<"1"<<endl;
			}else{
				cout<<"0"<<endl;
			}
		}else if(cmd=="top"){
			if(s.empty()){
				cout<<"-1"<<endl;
			}else{
				cout<<s.top()<<endl;
			}
		}
	}
	
}
