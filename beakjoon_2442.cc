/*
problem
: one star on the first line, 3 stars on the second line, ... , 2xN-1 stars on the Nth line
stars should be sorted by center
condition
: 1<=N<=100
Example
-Input
5
-Output
    *
   ***
  *****
 *******
*********
*/
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int k=n-i;k>0;k--){
			printf(" ");
		}
		for(int j=0;j<2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}	
}
