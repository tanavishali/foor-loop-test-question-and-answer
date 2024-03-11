//8. Write a for loop to find the factorial of a given number.
#include <iostream>
using namespace std;

int main() {
	int factorial=1,num;
	cin>>num;
	for(int i=1;i<=num;i++){
		factorial*=i;
	}
	cout<<factorial;
}