/*
problem
: printout stars like example rules
condition
: 1<=N<=100
Example
-Input
5
-Output
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/

#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0; j<i;j++){
			printf("*");
		}
		for(int k=n-i;k>0;k--){
			printf(" ");
		}
		for(int k=n-i;k>0;k--){
			printf(" ");
		}		
		for(int j=0; j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=1;i<=n-1;i++){
		for(int j=n-i;j>0;j--){
			printf("*");
		}
		for(int k=0;k<i;k++){
			printf(" ");
		}
		for(int k=0;k<i;k++){
			printf(" ");
		}
		for(int j=n-i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}

}
