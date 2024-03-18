//Write a program to print a right triangle pattern of numbers where
// each row contains the numbers from 1 up to that row's number using nested for loops.
#include<iostream>
using namespace std;

int main(){
	/*
*
**
***
****
*****
*/
//
//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}


/*
*****
****
***
**
*
*/

//	int i,j;
//	for(i=1;i<=5;i++){
//		for(j=i;j<=5;j++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}

/*
   *
  ***
 ***** 
*******
*/

//for(int i=1; i<=4; i++){
//    for(int j=1; j<=(4-i); j++){
//        cout<<" ";
//    }
//    for(int j=1; j<=(2*i-1); j++){
//        cout<<"*";
//    }
//    cout<<endl;
//}
/*
12345
12345
12345
12345
*/
//	for(int i=1;i<=5;i++){
//		for(int j=1;j<=5;j++){
//			cout<<j;
//		}
//		cout<<endl;
//	}

/*
    *
   **
  ***
 ****
*****   
*/                 
//	int i,j;
//	for(i=1;i<=4;i++){
//	for(j=1;j<=4;j++){
//		if(j<=4-i){
//			cout<<" ";
//		}
//		else{
//			cout<<"*";           
//		}
//	}
//	
//		cout<<endl;
//	}

//hollow pattren
//******
//*    *
//*    *
//*    *
//****** 
//for(int i=1;i<=5;i++){
//	for(int j=1;j<=5;j++){
//		if(i==1 || j==1 || i==5 || j==5){
//			cout<<"*";
//		}
//		else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}
 /*
1010101
 10101
  101
   1
 */
 int i,j,k;
 for(i=4;i>=1;i--){
    for(j=4;j>=i;j--){
    	cout<<" "; //for control space 
	}
	for(k=1;k<=i;k++) // this loop for print the pattren
	{	
		cout<<"1";
     if(k<i){
     	cout<<"0";
	 }
 }
 cout<<endl;
}
}