/*
	Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
	Your task is simple. Given a string, you need to tell if it is a lapindrome.
	Input:
	First line of input contains a single integer T, the number of test cases.
	Each test is a single line containing a string S composed of only lowercase English alphabet.
	Output:
	For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.
	Constraints:

		1 ≤ T ≤ 100
		2 ≤ |S| ≤ 1000, where |S| denotes the length of S

	Example:
	Input:

	6
	gaga
	abcde
	rotor
	xyzxy
	abbaab
	ababc


	Output:

	YES
	NO
	YES
	YES
	NO
	NO
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
    string str;
    getline(cin,str);
    int len=str.length();
    string str2,str3;
    if(len%2==0){
        str2=str.substr(0,len/2);
        str3=str.substr(len/2,len);
    }
    else{
        str2=str.substr(0,len/2);
        str3=str.substr(len/2+1,len);
    }
    int A[26]={0},B[26]={0};
    int k=len/2;
    for(int i=0;i<k;i++){
        A[str2[i]-97]++;
        B[str3[i]-97]++;
    }
    int isState=1;
    for(int i=0;i<26;i++){
        if(A[i]!=B[i]){
            isState=0;
            break;
        }
    }
    if(isState){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
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

