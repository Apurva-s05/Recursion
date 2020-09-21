#include<bits/stdc++.h>
using namespace std;

void print(int n){
	//Base case
	if(n == 0){
		return;
	}

	//Recursion
	print(n-1);         // 1 2 3 4 ......... n-1
	cout<<n<<endl;
}
void print1(int n){
	//Base case
	if(n == 0){
		return;
	}

	cout<<n<<endl;

	//Recursion
	print1(n-1);         // n-1.........4 3 2 1

}

int main(){
	int n;
	cout<<"Enter value of n: "<<endl;
	cin>>n;

	cout<<"In sequence: "<<endl;
	print(n);

	cout<<"In reverse sequence: "<<endl;
	print1(n);
	return 0;
}
