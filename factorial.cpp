#include <bits/stdc++.h>
using namespace std;

int Fact(int n){
	cout<<n<<endl;
	if(n == 0) return 1;

    int ans = Fact(n-1);
    return n*ans;
}

int main() {
	int n;
	cout<<"Enter size:";
	cin>>n;

	int fact = Fact(n);
	cout<<"Factorial: "<<fact<<endl;

	return 0;
}
