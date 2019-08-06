/*
this is the solution of #1212
https://www.acmicpc.net/problem/1212
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
	string s;
	string res;
	cin>>s;
	int num=s.size();
	if(s=="0"){
		cout<<"0";
		return 0;
	}
	
	for(int i=0;i<num;i++){
		switch(s[i]){
			case '0':
				if(i!=0){	
				res+="000";
				}
				break;
			case '1':
				if(i!=0){
				res+="001";
				}else{
				res+="1";
				}
				break;
			case '2':
				if(i!=0){
				res+="010";
				}else{
				res+="10";
				}
				break;				
			case '3':
				if(i!=0){
				res+="011";
				}else{
				res+="11";
				}
				break;				
			case '4':
				res+="100";
				break;
			case '5':
				res+="101";
				break;
			case '6':
				res+="110";
				break;
			case '7':
				res+="111";
				break;					
		}
	}
	
	cout<<res<<endl;
	
	return 0;
}
