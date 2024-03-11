#include <iostream>
using namespace std;

int main() {
//	program to check the greatest commom devisor of two numbers 
int num1,num2,gcd=0;
cin>>num1>>num2;
int min=0;
min=(num1+num2)/2;
cout<<endl<<min<<endl;
for(int i=1; i<=num1 && i<=num2; i++){
	if (num1%i==0 && num2%i==0){
		gcd=i;
	}
}
cout<<gcd;
return 0;
}