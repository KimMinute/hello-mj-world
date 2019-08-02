/*
Problem
: one star on the first line, two stars on the second line, and N stars on the Nth line
Condition
: 1<=N<=100
Example
-Input
5
-Output
*
**
***
****
*****
*/
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
