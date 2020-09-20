/* Fibonacci series is addition of two previous terms i.e. f(n) = f(n-1) + f(n-2) */

#include <iostream>
using namespace std;

int fib(int n){
	// Base case
	if(n == 0){
		return 0;
	}

	if(n == 1){
			return 1;
		}

	// Recursive case
	int output1 = fib(n-1);
	int output2 = fib(n-2);

	//calculation
	return output1 + output2;
}


int main() {
	int n;

	cout << "Enter a number of which we want fibonacci series: "<< endl;
    cin >> n;
	cout << "Fibonacci series is: "<< fib(n);
	return 0;
}
