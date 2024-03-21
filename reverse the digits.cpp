#include<iostream>
using namespace std;
int main(){
//	reverse the digits
int number,reverse=0,lastdigits,sum=0;
cin>>number;
for(;number>0;){
	lastdigits=number%10; //this givs the last digits of any   number like ( 123%10)= 3
//	cout<<lastdigits;
	reverse=reverse*10+lastdigits;

	number=number/10; //this  break the number ( 123/10)=12
}
cout<<reverse;
}