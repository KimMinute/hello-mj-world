/*
this is the solution of beakjoon #1373
https://www.acmicpc.net/problem/1373
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
	string s;
	cin>>s;
	
	int num=s.size();
	
	switch(num%3){
		case 0:
			break;
		case 1:
			s="00"+s;
			break;
		case 2:
			s="0"+s;
			break;
	}
	
	num=s.size();
	
	string res;

	for(int i=0;i<num;i+=3){
		string sub=s.substr(i,3);
		//cout<<"i:"<<i<<", substr:"<<sub<<endl;
			if(sub=="000"){
				res+="0";
			}else if(sub=="001"){
				res+="1";
			}else if(sub=="010"){
				res+="2";
			}else if(sub=="011"){
				res+="3";
			}else if(sub=="100"){
				res+="4";
			}else if(sub=="101"){
				res+="5";
			}else if(sub=="110"){
				res+="6";
			}else if(sub=="111"){
				res+="7";
			}
		
	}
	
	cout<<res<<endl;
	
	return 0;
}
