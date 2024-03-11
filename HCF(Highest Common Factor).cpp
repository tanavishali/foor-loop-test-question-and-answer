//8. Write a program to calculate HCF of Two given number. solution
#include<iostream>
using namespace std;
int main(){
	int Hcf,num1,num2,min;
	cin>>num1>>num2;
//	first find the min of two numbers
	min=(num1+num2)/2;
	cout<<min;
	for(int i=1;i<=min;i++){
//		condition if both of two 
//		numbers is devided by i then set the hcf=i and then print
		if(num1%i==0 && num2%i==0){
		
			Hcf=i;
		}
	}
	cout<<endl<<" Highest Common Factor of numbers is :"<<Hcf;
}
