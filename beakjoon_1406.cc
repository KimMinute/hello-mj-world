/*
this code is the solution of beakjoon #1406.
please refer below url for checking problem.
https://www.acmicpc.net/problem/1406
*/
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	stack<char> st_left;
	stack<char> st_right;
	
	string first_input;
	string res;
	int cmd_num;
	char add_input;
	char cmd;
	
	cin>>first_input;
	for(int i=0;i<first_input.size();i++){
		st_left.push(first_input[i]);
	}
	
	cin>>cmd_num;
	
	for(int i=0;i<cmd_num;i++){
		cin>>cmd;
		//cout<<"cmd:"<<cmd<<endl;
		
		if(cmd=='L'){
			//cout<<"L"<<endl;
			if(st_left.empty()!=1){
			st_right.push(st_left.top());
			st_left.pop();
			}
		}else if(cmd=='D'){
		//	cout<<"D"<<endl;			
			if(st_right.empty()!=1){
			st_left.push(st_right.top());
			st_right.pop();			}			
		}else if(cmd=='B'){
		//	cout<<"B"<<endl;
			if(st_left.empty()!=1){
			st_left.pop();
			}					
		}else if(cmd=='P'){
		//cout<<"P"<<endl;
			cin>>add_input;
			st_left.push(add_input);
		}
	}
	
	//cout<<"left_stack size:"<<st_left.size()<<endl;
	
	int st_left_size=st_left.size();
	
		for(int i=0;i<st_left_size;i++){
			char temp_ch1=st_left.top();
			//cout<<"temp_ch1:"<<temp_ch1<<endl;
			st_right.push(temp_ch1);
			st_left.pop();			
		}

	//cout<<"right_stack size:"<<st_right.size()<<endl;
	int st_right_size=st_right.size();
	
		for(int i=0;i<st_right_size;i++){
			char temp_ch2=st_right.top();
			//cout<<"temp_ch2:"<<temp_ch2<<endl;
			//res[i]=temp_ch2;
			//cout<<"res[i]:"<<res[i]<<endl;			
			//st_right.pop();
			cout<<temp_ch2;
			st_right.pop();
			
		}	
	
}
