/*
Problem
: Input 2 integer A and B, then print out A+B
Condition
: firstline input is number of testcase T, each testcase is oneline and A,B is input
Example
-Input
5
1 1
2 3
3 4
9 8
5 2
-Output
2
5
7
17
7
*/

#include<iostream>

using namespace std;

int main(){
    int T,a,b;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>a>>b;
        cout<<a+b<<endl;
    }
}
