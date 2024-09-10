#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Reverse_Digits(int num){
	int revNumber = 0;
	 while(num != 0){
	 	int lastDigit = num % 10;
	 	 if((revNumber > INT_MAX/10) || (revNumber < INT_MIN/10)){
                return 0;
            }
	 	revNumber = (revNumber * 10) + lastDigit;
	 	num = num / 10;
	 } 
	 cout<<revNumber;
}

int main(){
	int n;
	cout<<"Enter a Number:";
	cin>>n;
	Reverse_Digits(n);
}
