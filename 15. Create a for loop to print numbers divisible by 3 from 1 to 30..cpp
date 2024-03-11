//15. Create a for loop to print numbers divisible by 3 from 1 to 30.
#include <iostream>
using namespace std;

int main() {
	for(int i=1;i<=30;i++){
		if(i%3==0){
			cout<<i<<endl;
		}
	}
}