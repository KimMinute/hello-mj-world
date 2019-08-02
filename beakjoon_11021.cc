/*
Problem
: Input 2 integer A and B, then print out A+B with below format.
Case #(testcase number):A+B
Condition
: number of testcase T. input interger A and B
Example
-Input
5
1 1
2 3
3 4
9 8
5 2
-Output
Case #1: 2
Case #2: 5
Case #3: 7
Case #4: 17
Case #5: 7
*/

#include<iostream>

using namespace std;

int main(){
    int T,a,b;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>a>>b;
        cout<<"Case #"<<i+1<<": "<<a+b<<endl;
    }
}
