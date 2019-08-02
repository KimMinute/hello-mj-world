/*
problem
: Printout one line per line from N to 1 to given N
Condition
: N<=100,000
Example
-Input
5
-Output
5
4
3
2
1
*/

#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=N;i>=1;i++){
	printf("%d\n",i);
    }
}
