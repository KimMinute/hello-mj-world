/*
this is the solution fo #10814
https://www.acmicpc.net/problem/10814
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Person{
	int age;
	string name;
};

bool cmp(const Person &u, const Person &v){
	if(u.age<v.age){
		return true;
	}
	else{
		return false;	
	}
}

int main(){
	int n;
    cin>>n;
    
    vector<Person> a(n);
	
	for(int i=0;i<n;i++){
		//scanf("%d %d",&a[i].age,&a[i].name);
        cin>>a[i].age>>a[i].name;
	}
	
	stable_sort(a.begin(),a.end(),cmp);
	
	for(int i=0;i<n;i++){
		cout<<a[i].age<<" "<<a[i].name;
        printf("\n");
	}
	
	return 0;
}
