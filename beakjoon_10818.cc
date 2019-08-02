/*
problem
: printout minimun and maximun about given N numbers integer
Condition
:1<=N<=1,000,000
Example
-Input
5
20 10 35 30 7
-Output
7 35
*/
#include<iostream>

using namespace std;

int main(){
    int N;
    int x;
    int max_val=-1000000;
    int min_val=1000000;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>x;
        if(max_val<x) max_val=x;
        if(min_val>x) min_val=x;
    }
    cout<<min_val<<" "<<max_val<<endl;
}
