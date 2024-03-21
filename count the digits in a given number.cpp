#include<iostream>
using namespace std;
int main(){
	int number,re,sum=0,itration;
	cin>>number;
	for(;number>0;){
		itration++; //it use for count how many time number devide and how much tha numbers 

//		re=number%10; 
//		sum=sum+re; //sum of the number in every itration
		number=number/10; 
			
	}
	cout<<endl<<itration;
}