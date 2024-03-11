#include <iostream>
using namespace std;

int main() {
//	sum of any digit 123 sum 6
int num,sum=0,re;
cin>>num;
for( ;num>0 ;){
	re=num%10;
	sum=sum+re;
	num=num/10;
	cout<<re<<endl;
}

cout<<" sum of these digits is: "<<sum;
}