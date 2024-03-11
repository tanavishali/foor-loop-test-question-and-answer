#include <iostream>
using namespace std;

int main() {
//	even numbers
int range;
cin>>range;
int sum1=0;
for (int i=2;i<=range;i=i+2){
	cout<<i<<endl;
	
	sum1=sum1+i;
}
cout<<"sum of even numbers "<<sum1;
int number=sum1;
cout<<"\n store sum1 in number variable :"<<number;
cout<<"\n sum of digits of final result\n";
int temp;
int sum2=0;
for( ;number>0; ){
	temp=number%10;
	number=number/10;
	sum2+=temp;
}
cout<<endl<<"sum of digits "<<sum1<<" is :"<<sum2;

}

