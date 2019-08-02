/*
Problem
: Letters with a length of N consisting only lowercase and uppercase letters are given. Printout 10 characters per line.
Condition
: Word is given on the first line. words do not exceed 100 in length. words with zero length are not given.
Example 
-Input
OneTwoThreeFourFiveSixSevenEightNineTen
-Output
OneTwoThre
eFourFiveS
ixSevenEig
htNineTen
*/
#include<iostream>

using namespace std;

int main(){
    char a[100];
    while(scanf("%10s",a)==1){
        cout<<a<<endl;
    }
}
