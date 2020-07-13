//https://www.codechef.com/LRNDSA01/problems/ZCO14003
#include <iostream>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main() {
    long long int N;
    cin>>N;
    long long int A[N];
    for(long long int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N,greater<int>());
    stack<long long int> st;
    for(long long int x:A){
        st.push(x);
    }
    long long int max=INT_MIN;
    while(st.size()>0){
        long long int mul=st.size();
        long long int temp=st.top();
        long long int res=mul*temp;
        //cout<<res<<"\n";
        if(max<res){
            max=res;
        }
        st.pop();
    }
    cout<<max;
    
	return 0;
}
