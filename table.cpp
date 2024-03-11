#include<iostream>
using namespace std;
int main(){
//	int table=2;
//	for (int i=0;i<=10;i++){
//		cout<<table<<" * "<<i<<" = "<<table*i<<endl;
//	}
int table,range;
cout<<"Enter table name:\n and range ";
cin>>table>>range;
for (int i=0;i<=range;i++){
		cout<<table<<" * "<<i<<" = "<<table*i<<endl;
	}
	return 0;
}