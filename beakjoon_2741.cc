/*
problem
: Printout one line per line from 1 to N to given N
Condition
: N<=100,000
Example
-Input
5
-Output
1
2
3
4
5
*/

#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
	printf("%d\n",i);
    }
}
