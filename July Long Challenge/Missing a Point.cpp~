#include <iostream>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
void fun(){
    int n;
    cin>>n;
    map<int,int> m1;
    map<int,int> m2;
    for(int i=0;i<4*n-1;i++){
    	int a1,a2;
    	cin>>a1;
    	cin>>a2;
    	m1[a1]++;
    	m2[a2]++;
    }
    for(auto itr=m1.begin();itr!=m1.end();itr++){
    	if(itr->second%2!=0){
    		cout<<itr->first<<" ";
    	}
    }
    
    for(auto itr=m2.begin();itr!=m2.end();itr++){
    	if(itr->second%2!=0){
    		cout<<itr->first;
    	}
    }
}
int main() {
	int TestCase;
	cin>>TestCase;
	while(TestCase>0){
        fun();
        cout<<"\n";
	    TestCase--;
	}
	return 0;
}
