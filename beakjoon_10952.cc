/*
Problem
: Input 2 integer A and B, then printout A+B
Condition
: Input is consist of several testcases. each testcase is one line, and A and B is input(0<A,B<10). two zeros input means the end of testcase.
Example
-Input
1 1
2 3
3 4
9 8
5 2
0 0
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
    int a,b;
    while(cin>>a>>b){
        if(a==0&&b==0) break;
        cout<<a+b<<endl;
    }
}

