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
    if(n>64||n<=0){
    	return;
    }
    int c=n/8;
    char A[8][8];
    for(int i=0;i<8;i++){
    	for(int j=0;j<8;j++){
    		A[i][j]='.';    	
    	}
    }
    A[0][0]='0';
    
    if(n%8==0){
		for(int i=0;i<8;i++){
			A[c][i]='X';
		}
	}
	else{
	
		for(int i=n%8;i<8;i++){
				A[c][i]='X';
			
		}
		for(int i=0;i<=n%8;i++){
			A[c+1][i]='X';
		}
	}
    
		
    for(int i=0;i<8;i++){
    	for(int j=0;j<8;j++){
    		cout<<A[i][j];
    	}
    	cout<<"\n";
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
