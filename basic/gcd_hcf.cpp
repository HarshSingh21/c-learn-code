#include<iostream>
using namespace std;

int main() {
     int a ,b;
     cin>>a>>b;
	int ans;
	for (int i = 1; i <= min(a,b); i++) {
		if (a % i == 0 && b % i == 0) {
			ans = i;
		}
	}
	cout<<ans;
}

