/*
problem
: print stars like example
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
 *******
  *****
   ***
    *
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
	for(int i=n-1;i>0;i--){
		for(int k=0;k<n-i;k++){
			printf(" ");
		}
		for(int j=2*i-1;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
}
