#include <bits/stdc++.h>
using namespace std;

int power(int x,int n){
	// Base case
	if(n == 0){
		return 1;
	}

	// Recursive case
	int output1 = power(x,n-1);


	//calculation
	return x*output1;
}


int main() {
	int n,x;

	cout << "Enter value of n and x: "<< endl;
    cin >> n;
    cin >> x;
	cout << "Power is: "<< power(x,n);
	return 0;
}
