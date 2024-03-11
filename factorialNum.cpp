#include<iostream>
using namespace std;
int main(){
	int factorialNum;
	cin>>factorialNum;
	cout<<" number you enter is :"<<factorialNum<<endl;
	int factorial=1;
	for(int i=1;i<=factorialNum;i++){
		
		factorial=factorial*i;
		cout<<" "<<factorial<<endl;
		
	}
	cout<<"factorial of number is :"<<factorial;
}