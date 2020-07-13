/*
	Given an Integer N, write a program to reverse it.
	Input

	The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.
	Output

	For each test case, display the reverse of the given number N, in a new line.
	Constraints

		1 ≤ T ≤ 1000
		1 ≤ N ≤ 1000000

	Example

	Input
	4
	12345
	31203
	2123
	2300
	Output
	54321
	30213
	3212
	32
*/
#include <iostream>
#include<math.h>
#include<vector>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
void fun(){
    long int a;
    cin>>a;
    int b=0;
    while(a>0){
        int temp=a%10;
        b=b*10+temp;
        a=a/10;
    }
    cout<<b;
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
