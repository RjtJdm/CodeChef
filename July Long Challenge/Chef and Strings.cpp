#include<iostream>
#include<vector>                                                                                                                         
using namespace std;
void fun(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int c=0;
	for(int i=1;i<n;i++){
		c+=abs(v[i]-v[i-1])-1;
	}
	cout<<c;
}
int main()
{	
	int testCase;
	cin>>testCase;
	while(testCase>0){
		testCase--;
		fun();
		cout<<"\n";
	}
}
