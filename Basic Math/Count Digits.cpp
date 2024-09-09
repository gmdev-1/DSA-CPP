#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Count_Digits(int num){
	int count = 0;
	while(num != 0){
		count = count + 1;
	    num = num / 10;
	}
	cout<<count;
}

int main(){
	int n;
	cout<<"Enter a Number:";
	cin>>n;
	Count_Digits(n);
}
