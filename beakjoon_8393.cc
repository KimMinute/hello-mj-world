/*
problem
: printout summation from 1 to input n
condition
: 1<=n<=10,000
Example
-Input
3
-Output
5
*/

#include<iostream>

using namespace std;

int main(){
    int n;
    int sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
}
