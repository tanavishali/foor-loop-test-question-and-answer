#include<iostream>
using namespace std;
int main(){
//	5. Write a program in C++ to check whether a number is prime or not.
int number;
cin>>number;
//	if(number==0 || number==1){
//		cout<<"not prime";
//		
//	}
//	else{
//		
//	
//	for(int i=1;i<=number;i++){
//	if(number%2==0 || number==2 ){
//		
//		cout<<"prime";
//		break;
//	}
//	else{
//		cout<<"not prime";
//		break;
//	}
//}
//}
// another methode
int ctr=0;
for (int i=1;i<=number;i++){
	if(number%i==0){
		ctr++;
		
}
}
if(ctr==2){
	cout<<"prime";

}
else{
	cout<<"not prime";
}

}
