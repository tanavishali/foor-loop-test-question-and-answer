//20. Create a for loop to print the square of numbers from 1 to 5.
#include <iostream>
#include<cmath>
using namespace std;

int main() {
//	int square=1;
//	for(int i=1;i<=5;i++){
//		square*=i;
//		cout<<square<<endl;
//	}
//	cout<<square;
	
//	25. Create a for loop to print the cube of numbers from 1 to 5.
int cub=1;
for(int  i=1;i<=5;i++){
	cub=pow(i,3);
	cout<<cub<<endl;
}
cout<<cub;
}