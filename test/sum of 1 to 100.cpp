//4. How can you use a for loop to calculate the sum of numbers from 1 to 100?
#include <iostream>
using namespace std;

int main() {
	int sum=0;
	for(int i=0;i<=100;i++){
		sum+=i;
		
	}
	cout<<sum;
}