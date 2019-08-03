/*
problem
: Parenthesis String (PS) is a string consisting of only two bracket symbols '(' and ')'. Among them, a character string whose parentheses are correctly formed is called a valid brace character string (Valid PS, VPS). A pair of parenthesized "()" strings is called the default VPS. If x is a VPS, the new string "(x)" in parentheses is also a VPS. And the new string xy concatenated with both VPS x and y becomes VPS. For example, "() ()" and "(())" are VPS, but "(() () Not a string.
You must determine whether the input parenthesized string is a VPS or not, and indicate the result as YES and NO.
Example
-Input
6
(())())
(((()())()
(()())((()))
((()()(()))(((())))()
()()()()(()()())()
(()((())()(
-Output
NO
NO
YES
NO
YES
NO
*/
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int T;
	string vp;

	cin>>T;
	
	for(int i=0;i<T;i++){
		bool val=true;		
		stack<char> st;

		cin>>vp;
		for(int j=0;j<vp.size();j++){
				if(vp[j]=='('){
					st.push('(');
				}else if(vp[j]==')'){
					if(st.empty()){
						val=false;
						break;
					}else{
						st.pop();
					}
				}
		}
		if(val==false){
			cout<<"NO"<<endl;
		}else{
			if(st.empty()){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
		
	}

	
}
