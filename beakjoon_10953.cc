/*
Problem
: Input 2 integer A and B, printout A+B
Condition
: number of testcase T is input in firstline. each testcase is consist of one line, A and ,(comma) then B is input.
Example
-Input
5
1,1
2,3
3,4
9,8
5,2
-Output
2
5
7
17
7
*/

#include <iostream>

using namespace std;

int main(void)
{
	int T,a,b;
	char c;
    cin>>T;
	for(int i=0;i<T;i++){
		cin>>a>>c>>b;
		cout<<a+b<<endl;
	}
}
