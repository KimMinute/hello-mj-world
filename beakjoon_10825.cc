/*
this is the solution of #10825
https://www.acmicpc.net/problem/10825
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Person{
	string name;
	int kor;
	int eng;
	int math;
};


bool cmp(const Person &u, const Person &v){
	if(u.kor>v.kor){
		return true;
	}else if(u.kor<v.kor){
		return false;
	}else{
		if(u.eng<v.eng){
			return true;
		}else if(u.eng>v.eng){
			return false;
		}else{
			if(u.math>v.math){
				return true;
			}else if(u.math<v.math){
				return false;
			}else{
				if(u.name<v.name){
					return true;
				}else{
					return false;
				}
			}//math else
		}//2nd eng else
	}//1st if else
}//bool cmp


int main(){
	int n;
  cin>>n;
    
  vector<Person> a(n);
	
	for(int i=0;i<n;i++){
		cin>>a[i].name>>a[i].kor>>a[i].eng>>a[i].math;
	}
	
	sort(a.begin(),a.end(),cmp);
	
	for(int i=0;i<n;i++){
		cout<<a[i].name;
		printf("\n");
	}
		
	return 0;
}
