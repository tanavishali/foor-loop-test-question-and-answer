#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num,temp;
	  int originalNum;
	  	
	for( int i=1;i<=1000;i++ ){
		num=i;
	int sum=0;
		  originalNum = num; // store number original value in another variable so that 
//	   that the orignal value same the value change during loop  
		for( ; num>0;){
		temp=num%10;
        temp= pow(temp, 3); // power function for cube
		sum=sum+temp;
		num=num/10;
	}
	if(sum==originalNum){
		cout<<originalNum<<endl;
	}
	}
}