#include<iostream>
using namespace std;
int main(){
//	given the 2 numbers a and b find the a raise to the power of b
int a,b,result=1;
cin>>a>>b;
for (int i=1;i<=b;i++){
	result*=a;
} 
cout<<result;
}