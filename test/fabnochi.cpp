//10. Create a for loop to print the Fibonacci series up to the 10th term.
#include <iostream>
using namespace std;

int main() {
	int num=10,sum=0;
	int first=0,second=1;
	for( int i=0;i<=num;i=first+second ){
		cout<<i<<endl;
		first=second;
		second=i;
		sum+=i;
	}
	cout<<endl<<"sum of all is "<<sum;
	
}