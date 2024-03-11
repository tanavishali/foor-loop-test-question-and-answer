#include<iostream>
using namespace std;
int main(){
	int start,end,prime,inum;
	cout<<
	cin>>start>>end;
	for(int i=start;i<=end;i++){
		prime=1; //set prime 1 
		inum=i/2; //devide the number so that loop work its half 
		for(int j=2;j<=inum;j++){
			if(i%j==0){
				prime=0;
				break;
			}
		}
		if(prime){ //if prime remain 1 then number is prime
			cout<<i<<endl;
		}
	}
}