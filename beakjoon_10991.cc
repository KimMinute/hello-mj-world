/*
problem
: printout stars following rules of example
condition
: 1<=n<=100
Example
-Input
4
-Output
   *
  * *
 * * *
* * * *
*/
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--){
			printf(" ");
		}
		for(int k=1; k<=2*i-1; k++){
			if(k%2==1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
