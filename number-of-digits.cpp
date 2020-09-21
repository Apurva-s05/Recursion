#include<bits/stdc++.h>
using namespace std;

int count(int n){
	//Base case
	if(n == 0){
		return 0;
	}

	//Recursion
	int ans = count(n/10);

	//Calculation
	return ans + 1;

}

int main(){
	int n;
	cout<<"Enter value of n: "<<endl;
	cin>>n;

	cout<<"No of digits: "<<endl;
	cout<<""<<count(n);

	return 0;
}
