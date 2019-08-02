/*
problem
: There are N stars on the first line, N-1 stars on the second, ..., and one star on the Nth line.However, stars sorted by right side (see example)
condition
: 1<=N<=100
Example
-Input
5
-Output
*****
 ****
  ***
   **
    *
*/
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int k=0;k<i;k++){
			printf(" ");
		}
		for(int j=n-i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}	
}
