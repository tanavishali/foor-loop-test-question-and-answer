#include<iostream>
using namespace std;
int main(){
	int number,re,sum;
	cin>>number;
	for(;number>0;){
		re=number%10;
		sum=sum+re;
//		number=number%10;
		
	}
	cout<<sum;
}