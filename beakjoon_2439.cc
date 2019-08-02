/*
problem
: One star on the first line, two stars on the second line, and N stars on the Nth line. However, print out the star sorted by right (see example).
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
		for(int j=n-i-1;j>0;j--){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}	
}
