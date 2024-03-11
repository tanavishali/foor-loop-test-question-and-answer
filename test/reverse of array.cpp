//11. How would you use a for loop to reverse an array of integers?
#include <iostream>
using namespace std;

int main() {
	int reverse[5];
	for(int i=1;i<=5;i++){
		cin>>reverse[i];
	}
		for(int i=5;i>=1;i--){
		cout<<endl<<reverse[i];
	}
	
}