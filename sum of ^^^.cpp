#include <iostream>
#include <math.h>
using namespace std;

int main() {
//	find the sum 
int n;
double sum=0,a;
cin>>n;
for(int i=1;i<=n;i++){

	 a = 1 / pow(i, i); 
	  cout << "1/" << i << "^" << i << " = " << a << endl; 
        sum += a;
}
cout<<sum;
}