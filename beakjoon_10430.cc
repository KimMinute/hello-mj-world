/*
this code is the solution of #10430
https://www.acmicpc.net/problem/10430
*/
#include<iostream>
using namespace std;

int main(){
	int A,B,C;
	cin>>A>>B>>C;
	cout<<(A+B)%C<<endl;
	cout<<(A%C+B%C)%C<<endl;
	cout<<(A*B)%C<<endl;
	cout<<(A%C*B%C)%C<<endl;
}
