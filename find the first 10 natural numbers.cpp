#include<iostream>
using namespace std;
int main(){
//	1. Write a program in C++ to find the first 10 natural numbers.
for (int i=1;i<=10;i++){
	cout<<i<<endl;
}
//2. Write a program in C++ to find the sum of the first 10 natural numbers.
int sum=0;
for (int i=1;i<=10;i++){
	sum=sum+i;
}
cout<<sum;
}