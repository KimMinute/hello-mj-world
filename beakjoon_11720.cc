/*
Problem
: N numbers are written without spaces. printout all these numbers sum.
Condition
: In the first line, number of N(1<=N<=100). In the second line, number N without spaces.
Example
-Input
25
7000000000000000000000000
-Output
7
*/
#include<iostream>

using namespace std;

int main(){
    int N,x;
    int sum=0;
    cin>>N;
    for(int i=0;i<N;i++){
        scanf("%1d",&x);
        sum+=x;
    }
    cout<<sum<<endl;
}
