#include<bits/stdc++.h>
using namespace std;

int count(int n){
	//Base case
	if(n == 0){
		return 0;
	}

	//Recursion
	int ans = count(n/10);

	int lastDigit = n%10;

	//Calculation
	return ans + lastDigit;

}

int main(){
	int n;
	cout<<"Enter value of n: "<<endl;
	cin>>n;

	cout<<"Sum is: "<<endl;
	cout<<""<<count(n);

	return 0;
}
