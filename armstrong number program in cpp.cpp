#include <iostream>
#include <cmath> 
using namespace std;

int main() {
//armstrong number program 
	int num,temp,sum=0;
	cin>>num;
	   int originalNum = num; // store number original value in another variable so that 
//	   that the orignal value same the value change during loop  
	for( ;num>0; ){
		

		temp=num%10;
		cout<<temp;
		 temp= pow(temp, 3); // power function for cube
		sum=sum+temp;
		num=num/10;
		
		cout<<" cube of "<<temp<<endl;
	}
	cout<<"sum of cubes is :"<<sum<<endl;
	if(sum==originalNum){
		cout<<originalNum<<" is armstrong .";
	}
	else{
		cout<<originalNum<<" is not armstrong .";
	}
	}	