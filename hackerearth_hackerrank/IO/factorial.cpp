#include <iostream>
#include <cstdio>
//Accepted
using namespace std;
int factorial(int n){
	if(n == 1) return 1;
	return n* factorial(n-1);
}

int main(){
	int n;
	while(cin >> n){
		cout << factorial(n) << endl;
	}
	return 0;
}