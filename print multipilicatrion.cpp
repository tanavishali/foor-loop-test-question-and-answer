#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	int sum=0,next,answer;
	for(int i=1;i<=5;i++){
		cout<<i<<"*"<<i<<"="<<i*i<<endl;
		next=(i*i);
		answer=answer+next;
		
	}
	cout<<answer;
}