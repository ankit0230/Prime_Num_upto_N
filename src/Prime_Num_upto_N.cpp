//============================================================================
// Name        : Prime_Num_upto_N.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void strike_off(int arr[],int i,int n){
	//int j=2;
	for(int j=2; i*j <= n; j++){
		arr[i*j] = 1;
	}

}


void cal_prime(int n){

	int arr[n];
	for(int i=0;i<=n;i++){
		arr[i] = 0;
	}
	for(int i=2; i<= n ; i++){

		if(arr[i]== 0){
			cout<<i<<endl;
			strike_off(arr,i,n);
		}

	}

}
int main() {
	int n=0;
	cout << "Enter Number to calculate series of Prime Number upto N: " << endl; // prints !!!Hello World!!!
	cin>>n;
	cal_prime(n);

	return 0;
}
