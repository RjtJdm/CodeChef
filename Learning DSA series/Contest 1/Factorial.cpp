//https://www.codechef.com/LRNDSA01/problems/FCTRL
#include <iostream>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
void fun(){
    long long int n;
    cin>>n;
    long long int k=5;
    long long int count=0;
    while(n/k!=0){
        count+=(n/k);
        k=k*5;
    }
    cout<<count;
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
