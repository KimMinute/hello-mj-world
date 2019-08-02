/*
problem
:  printout stars following example rules
condition
: 1<=n<=100
Example
-Input
5
-Output
*********
 *******
  *****
   ***
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
		for(int j=1;j<i;j++){
			printf(" ");
		}
		for(int k=2*(n+1-i)-1;k>0;k--){
			printf("*");
		}
		printf("\n");
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n-i;j++){
			printf(" ");
		}
		for(int k=1;k<=2*i+1;k++){
			printf("*");
		}
		printf("\n");
	}

}
