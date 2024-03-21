#include<iostream>
using namespace std;
int main(){
//	find the sum of 1-2+3-4.....n
int number,result=0;
cin>>number;
for(int i=1;i<=number;i++){
	if(i%2==0){ //check the parity of i not number if number itself id even or odd then 
	            // we need to check i 
		result-=i;
	}
	else{
		result+=i;
	}
}
cout<<result;
}