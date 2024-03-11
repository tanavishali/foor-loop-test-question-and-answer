#include<iostream>
using namespace std;
int main(){
//	Take 10 integers from keyboard using loop
// and print their average value on the screen.
cout<<"integer numbers from 1 to 10 :\n";
int integersNumber;
int sum=0;
int average;
for(int i=1;i<=5;i++){
	cin>>integersNumber;
	sum+=integersNumber;

}
for(int i=1;i<=5;i++){
	cout<<i;
	
}
cout<<endl<<sum<<endl;
average=sum/5;
cout<<average;
return 0;
}