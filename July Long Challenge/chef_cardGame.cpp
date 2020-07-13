#include<iostream>
#include<queue>    
#include<stack>                                                                                                                         
using namespace std;
void fun(){
	int game;
	cin>>game;
	int c=0;
	int m=0;
	for(int i=0;i<game;i++){
		int chef;
		cin>>chef;
		int montie;
		cin>>montie;
		int a=0;
		int b=0;
		while(chef>0){
			a+=(chef%10);
			chef=chef/10;
		}
		while(montie>0){
			b+=(montie%10);
			montie=montie/10;
		}
		if(a==b){
			c++;
			m++;
		}
		else if(a>b){
			c++;
		}
		else{
			m++;
		}
	}
	if(c==m){
		cout<<"2 "<<c;
	}	
	else if(c>m){
		cout<<"0 "<<c;
	}
	else{
		cout<<"1 "<<m;
	}
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
