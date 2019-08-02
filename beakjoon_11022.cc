/*
Problem
: Input 2 interger A and B, printout A+B as below format
Case #(testcase number): A + B = A+B
Condition
: number of testcase T, two integer A and B
Example
-Input
5
1 1
2 3
3 4
9 8
5 2
-Output
Case #1: 1 + 1 = 2
Case #2: 2 + 3 = 5
Case #3: 3 + 4 = 7
Case #4: 9 + 8 = 17
Case #5: 5 + 2 = 7
*/
#include<iostream>

using namespace std;

int main(){
    int T,a,b;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>a>>b;
        cout<<"Case #"<<i+1<<": "<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
}
