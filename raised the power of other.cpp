#include<iostream>
using namespace std;
int main(){
//	Two numbers are entered through the keyboard.
// Write a program to find the value of one number raised to the power of another.
int num1,num2,raised=1;
cin>>num1>>num2;
for(int i=1;i<=num2;i++){
	raised*=num1;
}
cout<<raised;
return 0;
}