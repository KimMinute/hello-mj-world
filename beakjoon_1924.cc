/*
Problem
: Today is Jan,1,2007 Monday. Then, what day of day y,month x,2007?
Example
-Input
1 1
-Output
MON
-Input
12 25
-Output
TUE
*/

#include<iostream>

using namespace std;

int main(){
	
	int x,y;
	int temp=0;
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>x>>y;
	
	for(int i=0;i<x;i++){
		temp+=day[i];
	}
	temp+=y;
	//cout<<"temp:"<<temp<<endl;
	switch(temp%7){
		case 0:
			cout<<"SUN"<<endl;
			break;
		case 1:
			cout<<"MON"<<endl;			
			break;
		case 2:
			cout<<"TUE"<<endl;			
			break;
		case 3:
			cout<<"WED"<<endl;			
			break;
		case 4:
			cout<<"THU"<<endl;			
			break;
		case 5:
			cout<<"FRI"<<endl;			
			break;
		case 6:
			cout<<"SAT"<<endl;			
			break;
	}
	
}
