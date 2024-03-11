//5. Can you write a nested for loop to create a multiplication table up to 5x5?
#include <iostream>
using namespace std;

int main() {
	int num=5;
	for(int i=1;i<=5;i++){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
}