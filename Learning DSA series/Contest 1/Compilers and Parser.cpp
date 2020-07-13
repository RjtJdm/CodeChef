//https://www.codechef.com/LRNDSA02/problems/COMPILER
#include <iostream>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
typedef long long int ll;
void fun(){
	string str;
	getline(cin,str);
	int c=0;
	int m=INT_MIN;
	stack<char> stack;
	for(int i=0;i<str.length();i++){
		if(stack.empty()){
			m=max(m,c);
			c=0;
			stack.push(str[i]);
		}
		else{
			if(str[i]=='<'){
				
				stack.push('<');
			}
			else{
				if(stack.top()=='<'){
					stack.pop();
					c++;
				}
				else{
					m=max(m,c);
					c=0;
					stack.push('>');
				}
			}		
		}
	}
	m=max(m,c);
	cout<<2*m;
}
int main() {
	int TestCase;
	cin>>TestCase;
	cin.ignore();
	while(TestCase>0){
        fun();
        cout<<"\n";
	    TestCase--;
	}
	return 0;
}
